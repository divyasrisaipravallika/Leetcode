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
    vector<int>v;
    void r1(TreeNode* root){
        if(root==NULL) return;
        v.push_back(root->val);
        r1(root->left);
        r1(root->right);
    }
    void r2(TreeNode* root){
        if(root==NULL) return;
        v.push_back(root->val);
        r2(root->left);
        r2(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        r1(root1);
        r2(root2);
        sort(v.begin(),v.end());
        return v;
        
    }
};