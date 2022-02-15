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
void solve(){
    int n;
    cin>>n;
    int arr[n],b[n];
    bool defaulter=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arraySortedOrNot(arr,n)){
        printarray(arr,n);
        return;
    }
    int ewalf = -1;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            ewalf = i+1;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==ewalf and ewalf!=-1){
            rvereseArray(arr,ewalf-1,i);
            printarray(arr,n);
            return;
        }
    }
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