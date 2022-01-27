class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int d1,d2;
        d1=mat.size();
        if(d1>0){
            d2=mat[0].size();
        }else{
            return mat;
        }
        if(d1*d2 == r*c){
            vector<int> v;
            for(int i=0;i<d1;i++){
                for(int j=0;j<d2;j++){
                    v.push_back(mat[i][j]);
                }
            }
            int k=0;
            vector<vector<int>> f;
            for(int i=0;i<r;i++){
                vector<int> rv;
                for(int j=0;j<c;j++){
                    rv.push_back(v[k]);
                    k++;
                }
                f.push_back(rv);
            }
            return f;
            
        }
        return mat;
    }
};