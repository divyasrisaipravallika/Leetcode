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
    void recursion(TreeNode* root,map<int,int>&map,int level){
        if(root==NULL) return;
        map[level]+=root->val;
        recursion(root->left,map,level+1);
        recursion(root->right,map,level+1);
    }
    int maxLevelSum(TreeNode* root) {
        map<int,int>map;
        recursion(root,map,1);
        int x = INT_MIN;
        int l = 0;
        for(auto it: map){
            if(it.second>x){
                x = it.second;
                l = it.first;
            }
        }
        return l;
    }
};