#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    } 
    ll LTR[n],RTL[n];
    LTR[0]=arr[0];
    for(ll i=1;i<n;i++){
        LTR[i]=max(arr[i],LTR[i-1]);
    }
    RTL[n-1]=arr[n-1];
    for(ll i=n-2;i>=0;i--){
        RTL[i]=min(arr[i],RTL[i+1]);
    }
    bool fl=0;
    for(ll i=0;i<n-1;i++){
        if(LTR[i]<RTL[i+1]){
            fl=1;
            break;
        }
    }
    if(fl){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    return;
}
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
	c_p_c();
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}