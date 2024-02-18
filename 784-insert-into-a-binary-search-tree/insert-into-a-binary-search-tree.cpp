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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp = root;
        TreeNode* n = new TreeNode(val);
        if(root==NULL){
            root=n;
            return root;
        }
        while(1){
            if(val<temp->val){
                if(temp->left!=NULL){
                    temp = temp->left;
                }
                else{
                    temp->left = n;
                    return root;
                }
            }
            else{
               if(temp->right!=NULL){
                    temp = temp->right;
                }
                else{
                    temp->right = n;
                    return root;
                }
            }
        }
    }
};