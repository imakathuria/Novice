/*
********************************************************************************************

░█████╗░██╗░░░██╗████████╗██╗░░██╗░█████╗░██████╗░  ██╗  ░█████╗░██╗░░██╗██╗░░██╗██╗██╗░░░░░
██╔══██╗██║░░░██║╚══██╔══╝██║░░██║██╔══██╗██╔══██╗  ╚═╝  ██╔══██╗██║░██╔╝██║░░██║██║██║░░░░░
███████║██║░░░██║░░░██║░░░███████║██║░░██║██████╔╝  ░░░  ███████║█████═╝░███████║██║██║░░░░░
██╔══██║██║░░░██║░░░██║░░░██╔══██║██║░░██║██╔══██╗  ░░░  ██╔══██║██╔═██╗░██╔══██║██║██║░░░░░
██║░░██║╚██████╔╝░░░██║░░░██║░░██║╚█████╔╝██║░░██║  ██╗  ██║░░██║██║░╚██╗██║░░██║██║███████╗
╚═╝░░╚═╝░╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░╚════╝░╚═╝░░╚═╝  ╚═╝  ╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝╚══════╝

**********************************************************************************************
*/
#include<bits/stdc++.h>
#include <iostream>
#define ll long long 
using namespace std;

#define forn(i, n) for(int i=0;i<n;++i)
#define fore(i, l, r) for(int i = int(l); i <= int(r); ++i)
#define sz(v) int(v.size())
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define x first
#define y1 ________y1
#define y second
#define ft first
#define sc second
#define pt pair<int, int>
#define sumv(arr) accumulate(all(arr),0)

void solve(){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    priority_queue<char> pq2;
    std::priority_queue<char, std::vector<char>, std::greater<char> > pq1;

    for(int i=0;i<n;i++){
        pq2.push(s2[i]);
    }
    for(int i=0;i<n;i++){
        pq1.push(s1[i]);
    }
    string ans="";
    int i=0;
    int count=0;
    for( i=0;i<s1.size() and i<s2.size();i++){
        char c1=pq1.top();
        pq1.pop();
        string subs="";
        subs.pb(c1);
        
        char c2=pq2.top();
        pq2.pop();
        subs.pb(c2);
        ans = ans + subs;
    }
    while(i<s1.size()){
        char c1=pq1.top();
        pq1.pop();
        ans.pb(c1);
        i++;
    }
    while(i<s2.size()){
        char c2=pq2.top();
        pq2.pop();
        ans.pb(c2);
        i++;
    }

    cout<<ans<<endl;
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
int main()
{
    c_p_c(); 
    int t;
    cin>>t;
    while(t--)
        solve();
    
    return 0;
}


/******************************************************************************************         ||                                                                                         ||
||                    ░█▀▀▀ ░█▄─░█ ░█▀▀▄ 　 ░█▀▀█ ░█▀▀▀█ ░█▀▀▄ ░█▀▀▀                       ||
||                    ░█▀▀▀ ░█░█░█ ░█─░█ 　 ░█─── ░█──░█ ░█─░█ ░█▀▀▀                       ||
||                    ░█▄▄▄ ░█──▀█ ░█▄▄▀ 　 ░█▄▄█ ░█▄▄▄█ ░█▄▄▀ ░█▄▄▄                       ||
||                                                                                         ||
*******************************************************************************************/