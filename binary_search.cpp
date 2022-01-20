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
int main(){
    vector<int> arr1 = {10, 15, 20, 25, 30, 35};
    int ans = search(arr1,36);
    cout<<ans<<endl;
}