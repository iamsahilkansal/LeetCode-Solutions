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
    void insert(ListNode* &tail, int a){
        ListNode* temp=new ListNode(a);
        tail->next=temp;
        tail=temp;

    }
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans=new ListNode();
        ListNode* tail=ans;
        //head=head->next;
        while(head->next!=NULL){
            head=head->next;
            int temp=0;
            while(head!=NULL && head->val!=0){
                temp+=head->val;
                head=head->next;
            }
            insert(tail, temp);
        }
        return ans->next;
    }
};