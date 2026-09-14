class Solution {
public:
    int scoreOfString(string s) {
        int res=0;
        for(int i=0;i<s.size()-1;i++){
            int a=s[i];
            int b=s[i+1];
            res+=abs(a-b);
        }
        return res;
    }
};