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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *i=head, *j=head->next, *p=head, *q, *t;
        while(j && j->next){
            i = i->next;
            j = j->next->next;
        }
        q = i;
        t = q->next;
        q->next = NULL;
        q = t;
        p = sortList(p);
        q = sortList(q);
        ListNode* r = new ListNode();
        t = r;
        while(p && q){
            if(p->val < q->val){
                t->next = p;
                p = p->next;
            }
            else{
                t->next = q;
                q = q->next;
            }
            t = t->next;
        }
        if(p) t->next = p;
        else if(q) t->next = q;
        return r->next;
    }
};