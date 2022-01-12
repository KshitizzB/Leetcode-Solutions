class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        for(int i=0; i<s.length(); i++){
            if(!t.empty()){
                if(s[i]==')' && t.top()=='(') t.pop();
                else if(s[i]=='}' && t.top()=='{') t.pop();
                else if(s[i]==']' && t.top()=='[') t.pop();
                else t.push(s[i]);
            }
            else t.push(s[i]);
        }
        return t.empty();
    }
};