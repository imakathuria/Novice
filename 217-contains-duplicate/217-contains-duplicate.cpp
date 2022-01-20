class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
            if(m[arr[i]]>1)return true;
        }
        return false;
    }
};