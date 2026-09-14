class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>x;
        for(char i:s){
            if(x.empty() || x.top().first!=i){
                x.push({i,1});
            }
            else{
                x.top().second++;
                if(x.top().second==k){
                    x.pop();
                }
            }
        }
        string res;
        while(!x.empty()){
            for(int i=0;i<x.top().second;i++){
                res+=x.top().first;
            }
            x.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};