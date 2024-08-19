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
    struct var{
        TreeNode* ptr;
        int data;
    };
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int ans=INT_MAX;
        stack<var>stk;
        stk.push({root, 1});
        while(!stk.empty()){
            var curr=stk.top();
            stk.pop();
            if(curr.ptr->left==NULL && curr.ptr->right==NULL){
                ans=min(ans, curr.data);
            }
            if(curr.ptr->right){
                stk.push({curr.ptr->right, curr.data+1});
            }
            if(curr.ptr->left){
                stk.push({curr.ptr->left, curr.data+1});
            }
        }
        return ans;
    }
};