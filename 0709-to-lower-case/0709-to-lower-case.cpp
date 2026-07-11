class Solution {
public:
    string toLowerCase(string s) {
        string word;
        for(int i =0;i<s.length();i++){
           char a = tolower(s[i]);
           word+=a;
        }
        return word;
        
    }
};