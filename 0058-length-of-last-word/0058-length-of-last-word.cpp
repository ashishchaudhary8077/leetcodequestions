class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int count=0;
        for(int i =0; i<n;i++){
            if(s[i]!=' ')
            if (i == 0 || s[i - 1] == ' ')
                    count = 1;
                else
                    count++; 
            
        }
        return count;
    }
};