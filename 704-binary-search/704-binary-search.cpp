class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0){
            return -1;
        }
        int index=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(index==-1 || index>=nums.size() ){
            return -1;
        }
        if(nums[index]==target){
            return index;
        }else{
            return -1;
        }
    }
};