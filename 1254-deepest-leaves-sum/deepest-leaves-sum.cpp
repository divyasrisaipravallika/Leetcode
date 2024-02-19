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
    void recursion(TreeNode* root, int c, map<int,vector<int>>&map,int &m){
        if(root==NULL) return;
        if(root!=NULL and root->left==NULL and root->right==NULL){
            if(map.find(c)!=map.end()){
                vector<int>v=map[c];
                v.push_back(root->val);
                map[c]=v;
                m = max(c,m);
            }
            else{
                map[c]={root->val};
                m = max(c,m);
            }
        }
        recursion(root->left,c+1,map,m);
        recursion(root->right,c+1,map,m);
    }
    int deepestLeavesSum(TreeNode* root) {
        map<int,vector<int>>map;
        int m = 0;
        recursion(root,0,map,m);
        vector<int>v=map[m];
        int sum = 0;
        for(int i = 0 ; i<v.size(); i++){
            sum+=v[i];
        }
        return sum;
    }
};