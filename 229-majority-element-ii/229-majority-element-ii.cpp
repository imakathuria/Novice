#include<bits/stdc++.h>
#define pb push_back
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(auto i : nums){
            ump[i]++;
        }
        int minct=(nums.size())/3;
        vector<int> ans;
        for(auto it=ump.begin();it!=ump.end();it++){
            if(it->second > minct){
                ans.pb(it->first);
            }
        }
        return ans;
    }
};