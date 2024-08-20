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
    int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL){
            return -1;
        }
        priority_queue<int, vector<int>, greater<int>>pq;
        queue<TreeNode*>q;
        q.push(root);
        //q.push(NULL);
        unordered_set<int> uset;
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            
            if(uset.find(curr->val)==uset.end()){
                pq.push(curr->val);
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
            uset.insert(curr->val);
            
        }
        if(pq.size()==1||pq.size()==0){
            return -1;
        }
        pq.pop();
        return pq.top();
    }
};