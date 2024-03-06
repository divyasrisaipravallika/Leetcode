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
    int k = 0;
    int backtrack(TreeNode* root,int c){
        if(root==NULL) return 0;
        if(root!=NULL and root->left==NULL and root->right==NULL) return 1;
        int x = backtrack(root->left,c+1);
        int y = backtrack(root->right,c+1);
        v.push_back(x+y);
        cout<<x<<" "<<y<<endl;
        return max(x,y)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        backtrack(root,0);
        if(root==NULL) return 0;
        if(root->right==NULL and root->left==NULL) return 0;
        int c = v[0];
        for(int i = 0 ; i < v.size(); i++){
            c = max(c,v[i]);
            cout<<v[i]<<endl;
        }
        return c;
    }
};