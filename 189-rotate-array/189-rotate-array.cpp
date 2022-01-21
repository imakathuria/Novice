class Solution {
public:
    void swapfn(vector<int>& nums, int i,int j){
        for(int x=i,y=j;x<y;x++,y--){
            swap(nums[x],nums[y]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0 || k==n){
            return;
        }
        if(k>n){
            k=k%n;
        }
        swapfn(nums,0,n-k-1);
        swapfn(nums,n-k,n-1);
        swapfn(nums,0,n-1);
        return;
    }
};