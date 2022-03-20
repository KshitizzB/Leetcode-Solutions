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
        ListNode *p=headA, *q=headB;
        int a=0, b=0;
        while(p){
            a++;
            p = p->next;
        }
        while(q){
            b++;
            q = q->next;
        }
        p = headA;
        q = headB;
        if(a>b) for(int i=1; i<=abs(a-b); i++) p = p->next;
        else for(int i=1; i<=abs(a-b); i++) q = q->next;
        while(p && q){
            if(p==q) return p;
            p = p->next;
            q = q->next;
        }
        return NULL;
    }
};