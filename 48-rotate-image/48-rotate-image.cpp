class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int col = arr.size();
        for(int i=0;i<col;i++){
            for(int j=0;j<i;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(int i=0;i<col;i++){
            reverse(arr[i].begin(),arr[i].end());
        }
    }
};