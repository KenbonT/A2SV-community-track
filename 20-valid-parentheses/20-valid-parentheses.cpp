class Solution {
public:
    bool isValid(string s) {
        bool valid = true;
      stack<char> stk;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
              stk.push(s[i]);  
            }
            else {
                if(stk.empty()) return false;
                
                if(s[i]==')'){
                    if (stk.top()=='(') stk.pop();
                    else return false;
                }
                   if(s[i]=='}'){
                    if (stk.top()=='{') stk.pop();
                    else return false;
                }
                if(s[i]==']'){
                    if (stk.top()=='[') stk.pop();
                    else return false;
                }
            }
                
                }
        return stk.empty();
    }
};