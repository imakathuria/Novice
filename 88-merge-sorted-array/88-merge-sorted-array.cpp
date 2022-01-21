class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s1=nums1.size();        
        int s2=nums2.size();
        // int j=0;
        // for(int i=m;i<m+n;i++){
        //     nums1[i]=nums2[j++];
        // }
        // sort(nums1.begin(),nums1.end());
        if(m==0){
            for(int i=0;i<n;i++){
                nums1[i]=nums2[i];
            }
            return;
        }
        int k=n+m-1;
        int i,j;
        for( i=m-1,j=n-1;i>=0 && j>=0;){
            if(nums1[i]>nums2[j]){
                nums1[k--]=nums1[i];
                i--;
            }
            else{
                nums1[k--]=nums2[j];
                j--;
            }
        }
        // cout<<k<<endl;
        if(i<0){
            while(k!=-1){
                nums1[k--]=nums2[j--];
            }
        }
    }
};