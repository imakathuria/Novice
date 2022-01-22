class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> table;
        for(int i=0;i<nums1.size();i++){
            table[nums1[i]]++;
        }
        vector<int> ansVector;
        for(int i=0;i<nums2.size();i++){
            if(table[nums2[i]]>0){
                ansVector.push_back(nums2[i]);
                table[nums2[i]]--;
            }
        }
        return ansVector;
    }
};