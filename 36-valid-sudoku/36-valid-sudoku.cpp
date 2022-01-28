class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {
        int row[9][9]={0},col[9][9]={0},box[9][9]={0};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(a[i][j] != '.'){
                    int t=a[i][j]-'0'-1;
                    int k=(i/3)*3+(j)/3;    // for calculating the box number
                    if(row[t][j] || col[i][t] || box[k][t])
                        return 0;
                    else
                        row[t][j]=col[i][t]=box[k][t]=1;
                }
            }
        }
        return 1;
    }
};