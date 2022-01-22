class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int zerosCount=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0)zerosCount++;
        // }
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[k++]=nums[i];
            }
        }
        
        // for populating the remaining indexes with 0
        while(k<nums.size()){
            nums[k++]=0;
        }
        return;
        
    }
};