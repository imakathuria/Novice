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
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int minElement=10e5,maxElement=10e-5,mi=-1,mxi=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>maxElement)mxi=i;
        if(arr[i]<minElement)mi=i;
        maxElement = max( maxElement , arr[i]);
        minElement = min(minElement , arr[i]);
        
    }
    int countLeft,countRight;
    countLeft=countRight=0;
    bool intersect=0;
    for(int i=0; i<n; i++ ){
        if(arr[i]==maxElement){
            mxi = i;
            break;
        }
        else if(arr[i]<maxElement){
            if(arr[i]==minElement){
                intersect=1;
            }
            countLeft++;
        }
        
    }
    for(int j=n-1;j>=0;j--){
        if(arr[j]==minElement){
            mi = j;
            break;
        }
        else if(arr[j]>minElement){
            countRight++;
        }
    }
    // cout<<countLeft<<" "<<countRight<<endl;
    int x = countLeft+countRight;
    if(mxi<mi)cout<<x<<endl;
    else cout<<x-1<<endl;
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