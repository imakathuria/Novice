/******************************************************************************
Author : Akhil Kathuria ❤

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
#define ll long long 
using namespace std;
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
void solve(){
    int n,m;
    cin>>n>>m;
    bool ltr=0;
    int j=m;
    for(int i=0;i<n;i++){
        if(i%2==0){
            string s(j,'#');
            cout<<s<<endl;
        }else{
            if(!ltr){
                string s(j-1,'.');
                cout<<s;
                cout<<'#'<<endl;
                ltr=1;
            }else{
                cout<<'#';
                string s(j-1,'.');
                cout<<s<<endl;
                ltr=0;
            }
        }
    }
}
int main()
{
    // c_p_c();
    // int t;
    // cin>>t;
    // while(t--)
    solve();
    return 0;
}