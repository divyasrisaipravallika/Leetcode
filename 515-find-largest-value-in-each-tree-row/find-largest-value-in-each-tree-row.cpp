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
    map<int,int>map;
    void recursion(TreeNode* root,int level){
        if(root==NULL){
            return;
        }
        if(map.find(level)!=map.end()){
            int m = map[level];
            map[level] = max(m,root->val);
        }
        else{
            map[level] = root->val;
        }
        recursion(root->left,level+1);
        recursion(root->right,level+1);
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int>v;
        recursion(root,0);
        for(auto it:map){
            v.push_back(it.second);
        }
        return v;
    }
};