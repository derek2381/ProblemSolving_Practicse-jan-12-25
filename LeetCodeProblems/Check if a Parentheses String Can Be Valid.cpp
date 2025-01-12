// Problem Link
// https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/description/


// Source Code

class Solution {
public:
    bool canBeValid(string s, string locked) {

        if(s.length()%2 == 1){
            return false;
        }

        int w = 0, o = 0, c = 0;

        for(int i = 0;i < s.length();i++){
            if(locked[i] == '0'){
                w++;
            }else if(s[i] == '('){
                o++;
            }else if(s[i] == ')'){
                c++;
            }

            if(w < (c - o)){
                return false;
            }
        }

        w = 0, o = 0, c = 0;

        for(int i = s.length()-1;i >= 0;i--){
            if(locked[i] == '0'){
                w++;
            }else if(s[i] == '('){
                o++;
            }else if(s[i] == ')'){
                c++;
            }

            if(w < (o - c)){
                return false;
            }
        }

        return true;
    }
};