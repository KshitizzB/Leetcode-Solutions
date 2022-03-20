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
    bool isPalindrome(ListNode* head) {
        ListNode *p=head, *q=head, *r=NULL, *t, *x=head;
        while(q && q->next){
            p = p->next;
            q = q->next->next;
        }
        while(p){
            t = p->next;
            p->next = r;
            r = p;
            p = t;
        }
        while(r){
            if(x->val!=r->val) return false;
            x = x->next;
            r = r->next;
        }
        return true;
    }
};