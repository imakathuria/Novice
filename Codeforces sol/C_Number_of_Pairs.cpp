#include<bits/stdc++.h>
using namespace std;
// #define long long long long long long
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    c_p_c();
    long long t;
    cin>>t;
    while(t--){
        long long n,l,r;
        cin>>n>>l>>r;
        vector<long long> v;
        for(long long i=0;i<n;i++){
            long long z;
            cin>>z;
            v.push_back(z);
        }
        long long ans = (n*(n-1))/2;
        long long i=0,j=n-1,cl=0,cr=0;
        sort(v.begin(),v.end());
        while(i<j){
            if (v[j]+v[i]<l){
                // cout<<cl<<" <- cl |";
                cl += j-i;
                i += 1;
            }
            else{
                j -= 1;
            }
        }
        // cout<<endl;

        i=0,j=n-1;
        while(i<j){
            if (v[j]+v[i]<=r){
                // cout<<cl<<" <- cl |";
                cr += j-i;
                i += 1;
            }
            else{
                j -= 1;
            }
        }
        cout<<cr-cl<<endl;
        // long long d = n*(n-1)/2 - cr;
        // ans -= cl;
        // ans -= d;
        // cout<<ans<<endl;
    }
    return 0;
}