/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*>temp;
        while(headA!=NULL){
            temp.insert(headA);
            headA=headA->next;
        }
        while(headB!=NULL){
            if(temp.find(headB)!=temp.end()){
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
    }
};