class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int s1=nums1.size();        
        // int s2=nums2.size();
        int j=0;
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[j++];
        }
        sort(nums1.begin(),nums1.end());

    }
};