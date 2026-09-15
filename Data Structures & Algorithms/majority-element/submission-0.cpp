class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>a;
        for(int i:nums){
            a[i]++;
        }
        int n=nums.size()/2;
        for(auto i:a){
            if(i.second>n){
                return i.first;
            }
        }
        return 0;
    }
};