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
        int sum;
    };
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }
        stack<var>stk;
        stk.push({root, root->val});
        while(!stk.empty()){
            var curr=stk.top();
            stk.pop();
            if(curr.sum==targetSum && curr.ptr->left==NULL && curr.ptr->right==NULL){
                return true;
            }
            if(curr.ptr->right){
                stk.push({curr.ptr->right, curr.sum + curr.ptr->right->val});
            }
            if(curr.ptr->left){
                stk.push({curr.ptr->left, curr.sum + curr.ptr->left->val});
            }
        }
        return false;
    }
};