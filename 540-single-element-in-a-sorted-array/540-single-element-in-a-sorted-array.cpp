class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // unordered_map<int,int> ump;
        // for(int i=0;i<nums.size();i++){
        //     ump[nums[i]]++;
        // }
        // for(auto it:ump){
        //     if(it.second==1){
        //         return it.first;
        //     }
        // }
        // return 0;
        int low=0,high=nums.size()-2;
        while(low<=high){
            int mid=(low+high)>>1;
            if(nums[mid]==nums[mid^1]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return nums[low];
    }
};