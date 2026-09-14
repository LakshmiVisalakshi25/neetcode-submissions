class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<char>x;
        for(char i:s){
            if(x.empty()){
                x.push(i);
            }
            else{
                string l;
                while(!x.empty() && x.top()==i){
                    l+=x.top();
                    x.pop();
                }
                l+=i;
                if(l.size()!=k){
                    for(char i:l){
                        x.push(i);
                    }
                }
            }
        }
        string res;
        while(!x.empty()){
            res+=x.top();
            x.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};