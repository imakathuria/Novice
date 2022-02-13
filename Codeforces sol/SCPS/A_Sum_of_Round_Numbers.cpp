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
int count(string s, char c)
{
    int res = 0;
    for (int i=0;i<s.length();i++)
        if (s[i] == c)
            res++;
    return res;
}
void solve(){
    string s;
    cin>>s;
    cout<<s.size()-count(s,'0')<<endl;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0')continue;
        cout<<s[i]+string(s.size()-i-1,'0')<<" ";
    }
    cout<<endl;
    return;
}
int main()
{
    // c_p_c();
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}