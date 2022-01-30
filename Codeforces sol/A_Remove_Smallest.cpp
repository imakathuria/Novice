#include<bits/stdc++.h>
using namespace std;
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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        bool flag=0;
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])>1){
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}