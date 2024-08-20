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
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL){
            return -1;
        }
        priority_queue<int, vector<int>, greater<int>>pq;
        unordered_set<int>uset;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(uset.find(curr->val)==uset.end()){
                uset.insert(curr->val);
                pq.push(curr->val);
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        if(pq.size()<k){
            return -1;
        }
        k--;
        while(k){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};