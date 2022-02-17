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
    vector<int> arr;
    forn(i,7){
        int x;
        cin>>x;
        arr.pb(x);
    }
    int sum = sumv(arr);
    // cout<<"sum "<<sum<<endl;
    if(sum!=1){
        sum = n%sum;
    }
    if(sum==0){
        for(int j=6;j>=0;j--){
            if(arr[j]!=0){
                cout<<j+1<<endl;
                return;
            }
        }
    }
    for(int i=0;i<7;i++){
        if(arr[i]==0)continue;
        sum -= arr[i];
        if(sum<=0){
            cout<<endl<<i+1<<endl;
            break;
        }
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
int main()
{
    c_p_c(); 
    // int t;
    // cin>>t;
    // while(t--)
        solve();
    
    return 0;
}


/******************************************************************************************         ||                                                                                         ||
||                    ░█▀▀▀ ░█▄─░█ ░█▀▀▄ 　 ░█▀▀█ ░█▀▀▀█ ░█▀▀▄ ░█▀▀▀                       ||
||                    ░█▀▀▀ ░█░█░█ ░█─░█ 　 ░█─── ░█──░█ ░█─░█ ░█▀▀▀                       ||
||                    ░█▄▄▄ ░█──▀█ ░█▄▄▀ 　 ░█▄▄█ ░█▄▄▄█ ░█▄▄▀ ░█▄▄▄                       ||
||                                                                                         ||
*******************************************************************************************/