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
    bool hasCycle(ListNode *head) {
        ListNode *i=head, *j=head;
        while(j && j->next){
            i = i->next;
            j = j->next->next;
            if(i==j) return true;
        }
        return false;
    }
};