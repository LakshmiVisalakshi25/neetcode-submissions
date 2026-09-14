class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>a;
        string l;
        for(char i:s){
            if(isalpha(i)){
                l+=i;
            }
            else{
                if(l.size()!=0){
                    a.push_back(l);
                    l="";
                }
            }
        }
        if(l.size()!=0){
            a.push_back(l);
        }
        return a[a.size()-1].size();
    }
};