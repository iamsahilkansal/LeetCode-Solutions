/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> temp;
        ListNode* temp1=head;
        while(temp1!=NULL){
            temp.push_back(temp1->val);
            temp1=temp1->next;
        }
        swap(temp[k-1], temp[temp.size()-k]);
        temp1=head;
        int i=0;
        while(temp1!=NULL){
            temp1->val=temp[i];
            i++;
            temp1=temp1->next;
        }
        return head;
    }
};