class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(string i:details){
            char x=i[11];
            char y=i[12];
            string l;
            l.push_back(x);
            l.push_back(y);
            int s=stoi(l);
            if(s>60){
                cnt++;
            }
        }
        return cnt;
    }
};