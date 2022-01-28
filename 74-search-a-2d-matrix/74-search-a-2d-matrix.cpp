class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int i,j,n,m;
        n=arr.size();
        m=arr[0].size();
        if(target<arr[0][0] || target>arr[n-1][m-1]){
            return false;
        }
        for(i=0;i<n;i++){
            if(arr[i][0]<= target and arr[i][m-1]>=target){
                return std::binary_search(arr[i].begin(),arr[i].end(),target);
            }
        }
        return false;
    }
};