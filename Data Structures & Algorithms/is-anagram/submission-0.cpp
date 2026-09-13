class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>a;
        for(char i:s){
            a[i]++;
        }
        for(char i:t){
            a[i]--;
            if(a[i]==0){
                a.erase(i);
            }
        }
        return a.empty();
    }
};
