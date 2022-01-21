class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     nums[i]=pow(nums[i],2);
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
        vector<int> v(n,0);
        int k=n-1;
        for(int i=0,j=n-1;i<=j;){
            if(abs(nums[i])<abs(nums[j])){
                int x=pow(nums[j],2);
                v[k]=x;
                j--;
            }else{
                int x=pow(nums[i],2);
                v[k]=x;
                i++;
            }
            k--;
        }
        return v;
    }
};