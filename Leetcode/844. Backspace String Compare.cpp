/*
844. Backspace String Compare

Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

*/
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a = "", b = "";
        for(int i = 0; i<s.size(); i++) {
            if(s[i]=='#'){
                if(a.size()>0) a.pop_back();
            } else a.push_back(s[i]);
            
        }
        for(int i = 0; i<t.size(); i++) {
            if(t[i]=='#'){
                if(b.size()>0) b.pop_back();
            } else b.push_back(t[i]);
            
        }
        if(a==b) return true;
        else return false;
    }
};
