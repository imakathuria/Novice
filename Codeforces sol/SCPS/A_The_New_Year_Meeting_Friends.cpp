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
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int maxElement = max({x1,x2,x3});
    int minElement = min({x1,x2,x3});
    cout<<abs(maxElement-minElement)<<endl;
}
int main()
{
    // c_p_c();
    solve();
    return 0;
}