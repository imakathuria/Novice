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
int arraySortedOrNot(int arr[], int n)
{
    if (n == 1 || n == 0)
        return 1;
 
    if (arr[n - 1] < arr[n - 2])
        return 0;
 
    return arraySortedOrNot(arr, n - 1);
}
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int indexofSmallestElement(int array[], int size)
{
    int index = 0;

    for(int i = 1; i < size; i++)
    {
        if(array[i] < array[index])
            index = i;              
    }

    return index;
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int ct_odd=0,ct_even=0;
    int even[n],Aeven[n];
    int k=0,m=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2!=0){
            ct_odd++;
            even[k++]=arr[i];
        }else{
            ct_even++;
            Aeven[m++]=arr[i];
        }
    }
    if(arraySortedOrNot(even,k) and arraySortedOrNot(Aeven,m)){
        cout<<"Yes"<<endl;
        return;
    }else{
        cout<<"No"<<endl;
        return;
    }
    // if(arraySortedOrNot(even,k)){
    //     cout<<"Yes"<<endl;
    //     return;
    // }
    // if(ct_odd==0){
    //     if(arraySortedOrNot(Aeven,m)){
    //         cout<<"Yes"<<endl;
    //         return;
    //     }
    //     cout<<"No"<<endl;
    //     return;
    // }
    // if(ct_even==0){
    //     if(arraySortedOrNot(even,k)){
    //         cout<<"Yes"<<endl;
    //         return;
    //     }
    //     cout<<"No"<<endl;
    //     return;
    // }
    // if(ct_odd%2==0){
    //     if(arraySortedOrNot(Aeven,m)){
    //         cout<<"Yes"<<endl;
    //         return;
    //     }
    // }
    // if(ct_odd==1){
    //     cout<<"Yes"<<endl;
    //     return;
    // }
    
    // cout<<"Yes"<<endl;
    // return;
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