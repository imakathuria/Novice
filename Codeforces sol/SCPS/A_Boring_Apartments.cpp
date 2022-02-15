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
void printarray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
} 
int noOfDigitsInNumber(int n){
    int count=0;
    while( n>0 ){
        n = n/10;
        count++;
    }
    return count;
}
void solve(){
    string s;
    cin>>s;
    int fi=-1,li=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            fi=i;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1'){
            li=i;
        }
    }
    int count=0;
    if(fi!=-1 and li!=-1){
        for(int i=fi;i<=li;i++){
            if(s[i]=='0'){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return;
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