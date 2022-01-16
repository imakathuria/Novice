class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        // sort(v.begin(), v.end());
        // vector<int> ans;
        // for(int i=0,j=v.size()-1;i<j;){
        //     if(v[i]+v[j]==target){
        //         ans.push_back(i);                
        //         ans.push_back(j);
        //         return ans;
        //     }else if(v[i]+v[j]>target){
        //         j--;
        //     }else if(v[i]+v[j]<target){
        //         i++;
        //     }
        // }
        // return ans;  
        vector<int> ans;
        for(int i=0;i<v.size()-1;i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]+v[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};