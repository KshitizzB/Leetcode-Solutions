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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 || !list2) return list1?list1:list2;
        ListNode *r, *s;
        if(list1->val<=list2->val){
            s = list1;
            list1 = s->next;
        }
        else{
            s = list2;
            list2 = s->next;
        }
        r = s;
        while(list1 && list2){
            if(list1->val<=list2->val){
                s->next = list1;
                s = list1;
                list1 = s->next;
            }
            else{
                s->next = list2;
                s = list2;
                list2 = s->next;
            }
        }
        if(list1) s->next = list1;
        else if(list2) s->next = list2;
        return r;
    }
};