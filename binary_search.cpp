#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
    int index=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    cout<<index<<endl;
    if(nums[index]==target){
        return index;
    }else{
        return -1;
    }
}
int search(int[] nums, int target) {
int pivot, left = 0, right = nums.length - 1;
while (left <= right) {
    pivot = left + (right - left) / 2;
    if (nums[pivot] == target) return pivot;
    if (target < nums[pivot]) right = pivot - 1;
    else left = pivot + 1;
}
return -1;
}
int main(){
    vector<int> arr1 = {10, 15, 20, 25, 30, 35};
    int ans = search(arr1,36);
    cout<<ans<<endl;
}