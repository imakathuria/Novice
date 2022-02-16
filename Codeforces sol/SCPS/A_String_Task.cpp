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
void solve(){
    string su;
    cin>>su;
    string ns = "";
    // ASCII (97,101,105,111,117)
    for(int i=0;i<su.size();i++){
        if(su[i]>=65 and su[i]<=92){
            su[i] = su[i] + 32;
        }
        
        if((su[i] == 97) || (su[i] == 101) || (su[i] == 105) || (su[i] == 111) || (su[i] == 117) || (su[i] == 121)){
            continue;
        }
        else{
            ns += '.';
            ns += su[i];
        }
    }
    cout << ns << endl;
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