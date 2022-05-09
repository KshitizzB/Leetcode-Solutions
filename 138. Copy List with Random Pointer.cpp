/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> m;
        Node* p = head;
        while(p){
            Node* r = new Node(p->val);
            m[p] = r;
            p = p->next;
        }
        p = head;
        while(p){
            Node* r = m[p];
            r->next = m[p->next];
            r->random = m[p->random];
            p = p->next;
        }
        return m[head];
    }
};