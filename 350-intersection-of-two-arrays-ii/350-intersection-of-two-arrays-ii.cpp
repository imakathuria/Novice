class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // unordered_map<int,int> table;
        // for(int i=0;i<nums1.size();i++){
        //     table[nums1[i]]++;
        // }
        // vector<int> ansVector;
        // for(int i=0;i<nums2.size();i++){
        //     if(table[nums2[i]]>0){
        //         ansVector.push_back(nums2[i]);
        //         table[nums2[i]]--;
        //     }
        // }
        // return ansVector;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n1 = (int)nums1.size(), n2 = (int)nums2.size();
        int i1 = 0, i2 = 0;
        vector<int> res;
        while(i1 < n1 && i2 < n2){
            if(nums1[i1] == nums2[i2]) {
                res.push_back(nums1[i1]);
                i1++;
                i2++;
            }
            else if(nums1[i1] > nums2[i2]){
                i2++;
            }
            else{
                i1++;
            }
        }
        return res;
    }
};