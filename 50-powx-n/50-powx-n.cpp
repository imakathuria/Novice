#define ll long long
class Solution {
public:
    double myPow(double x, int n) {
        ll nn=n;
        double ans = 1.0;
        // intuition is (2)^10 --> (2*2)^5 and (2)^5 --> (2)((2)^4)
        if(nn<0){
            nn=-nn;
        }
        while(nn>0){
            if(nn%2==1){
                ans = ans*x;
                nn--;
            }else{
                x = x*x;
                nn/=2;
            }
        }
        if(n<0){
            return (double)(1.0)/(double)(ans);
        }
        return ans;
    }
};