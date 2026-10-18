class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char k : s){
            if(k == '(' || k == '{' || k == '[') stk.push(k);
            else{
               if (stk.empty()) return false;
                char t = stk.top();
                if ((k == ')' && t == '(') ||
                    (k == '}' && t == '{') ||
                    (k == ']' && t == '[')) {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }
        if(stk.empty()) return true;
        else return false;
    }
};
