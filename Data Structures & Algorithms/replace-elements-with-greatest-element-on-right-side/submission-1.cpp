class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // for(int i=0;i<arr.size();i++){
        //     int maxi=-1;
        //     for(int j=i+1;j<arr.size();j++){
        //         maxi=max(arr[j],maxi);
        //     }
        //     arr[i]=maxi;
        // }
        vector<int>res(arr.size());
        cout << res.size();
        res[res.size()-1]=-1;
        for(int i=res.size()-2;i>=0;i--){
            res[i]=max(res[i+1],arr[i+1]);
        }
        return res;
    }
};