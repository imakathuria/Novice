class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==0 || n==1){
            return (n==0)? 0:nums[0]; 
        }
        int currSum=0,globalMax=INT_MIN;
        for(int i=0;i<n;i++){
            currSum = max(currSum+nums[i],nums[i]);
            globalMax = max(currSum,globalMax);
        }
        return globalMax;
    }
};