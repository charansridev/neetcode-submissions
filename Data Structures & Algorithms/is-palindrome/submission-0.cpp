class Solution {
public:
    bool isPalindrome(string s) {
    string s1;
        for(char c : s){
            if(isalnum(c)){
                if(isalpha(c)){
                    s1 += tolower(c);
                }
                else{
                    s1 += c;
                }
            }
        }
        string s2 = s1;
        reverse(s1.begin(),s1.end());
        return s1 == s2;    
    }
};
