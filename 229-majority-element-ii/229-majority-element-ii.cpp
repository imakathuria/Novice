#include<bits/stdc++.h>
#define pb push_back
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Boyer Moore Voting method
        int minct = nums.size()/3;
        int c1,c2,m1=INT_MIN,m2=INT_MIN;
        c1=c2=0;
        
        for(auto i : nums){
            if(i==m1){
                c1++;
            }
            else if(i==m2){
                c2++;
            }
            else if(c1==0){
                m1 = i;
                c1=1;
            }else if(c2==0){
                m2 = i;
                c2=1;
            }else{
                c1--;
                c2--;
            }
        }
        // cout<<m1<<m2<<endl;
        int cm1,cm2;
        cm1=cm2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==m1){
                cm1++;
            }else if(nums[i]==m2){
                cm2++;
            }
        }
        vector<int> v;
        if(cm1>minct){
            v.pb(m1);
        }
        if(cm2>minct){
            v.pb(m2);
        }
        return v;
        
        // unordered_map<int,int> ump;
        // for(auto i : nums){
        //     ump[i]++;
        // }
        // int minct=(nums.size())/3;
        // vector<int> ans;
        // for(auto it=ump.begin();it!=ump.end();it++){
        //     if(it->second > minct){
        //         ans.pb(it->first);
        //     }
        // }
        // return ans;
    }
};