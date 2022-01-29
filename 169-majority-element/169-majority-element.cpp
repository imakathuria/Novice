#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums.size()/2;
        // unordered_map<int,int> m;
        // for(auto i:nums){
        //     m[i]++;
        //     if(m[i]>maj){
        //         return i;
        //     }
        // }
        // return 0;
        int count=0,majEl=0;
        for(auto i : nums){
            if(count==0){
                majEl = i;
            }
            if(majEl == i){
                count++;
            }else{
                count--;
            }
        }
        return majEl;
            
    }
};