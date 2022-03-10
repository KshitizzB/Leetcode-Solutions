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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *i=head, *j=head;
        while(n--) j = j->next;
        if(j){
            while(j->next){
                i = i->next;
                j = j->next;
            }
            i->next = i->next->next;
        }
        else return head->next;
        return head;
    }
};