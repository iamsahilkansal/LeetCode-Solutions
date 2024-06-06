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
    int gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b, a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        while(temp->next!=NULL){
            int ans=gcd(max(temp->val, temp->next->val), min(temp->val, temp->next->val));
            ListNode* temp1=new ListNode(ans);
            ListNode* temp2=temp->next;
            temp->next=NULL;
            temp->next=temp1;
            temp1->next=temp2;
            temp=temp2;
        }
        return head;
    }
};