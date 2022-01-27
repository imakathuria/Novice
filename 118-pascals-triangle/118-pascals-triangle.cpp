class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n==0){
            return {};
        }
        if(n==1){
            return {{1}};
        }
        
        vector<vector<int>> pascal;
        pascal = {
            {1},
            {1,1}
        };
        for(int i=2;i<n;i++){
            vector<int> v(i+1);
            v[i]=1;
            v[0]=1;
            for(int j=1;j<i;j++){
                v[j]=pascal[i-1][j]+pascal[i-1][j-1];
            }
            pascal.push_back(v);
        }
        return pascal;
    }
};