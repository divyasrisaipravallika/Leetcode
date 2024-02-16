/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int k = 0;
    int backtrack(TreeNode* root,int &sum){
        if(root!=NULL and root->right==NULL and root->left==NULL){
            return root->val;
        }
        if(root==NULL){
            return 0;
        }
        int x = backtrack(root->left,sum);
        int y = backtrack(root->right,sum);
        sum+=abs(x-y);
        return x+y+root->val;
    }
    int findTilt(TreeNode* root) {
        int sum = 0;
        backtrack(root,sum);
        return sum;
    }
};