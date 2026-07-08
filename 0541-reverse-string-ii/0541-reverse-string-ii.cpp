class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 1;
        int l = 0;
        int n = s.length();
        while(l<n){
         reverse(s.begin() + l, s.begin() + min(l + k, n));
            l += 2 * k;

        }
         return s;
    }
};