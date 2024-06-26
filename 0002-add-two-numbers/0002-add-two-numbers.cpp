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
    ListNode* addTwoNumbers(ListNode* temp1, ListNode* temp2) {
        int carry=0, tempval;
        ListNode* ans=new ListNode();
        ListNode* head=ans;
        while(temp1!=NULL || temp2!=NULL){
            if(temp1==NULL){
                tempval=carry+temp2->val;
                temp2=temp2->next;
            }
            else if(temp2==NULL){
                tempval=carry+temp1->val;
                temp1=temp1->next;
            }
            else{
                tempval=carry+temp1->val+temp2->val;
                temp1=temp1->next;
                temp2=temp2->next;
            }
            head->next=new ListNode(tempval%10);
            carry=tempval/10;
            head=head->next;
        }
        if(carry>0){
            ListNode* ansTemp=new ListNode(carry);
            head->next=ansTemp;
        }
        return ans->next;
    }
};