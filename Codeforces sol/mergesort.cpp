// Online C++ compiler to run C++ program online
#include <iostream>
void merge(int *arr,int si,int mid,int ei){
    int A[100];
    int k=si,i,j;
    for( i=si,j=mid+1;i<=mid && j<=ei;){
        if(arr[i]>arr[j]){
            A[k]=arr[j];
            k++;
            j++;
        }
        else if(arr[i]<=arr[j]){
            A[k]=arr[i];
            k++;
            i++;
        }
    }
    while(j<=ei){
        A[k++]=arr[j++];
    }
    while(i<=mid){
        A[k++]=arr[i++];
    }
    
    for(int i=si;i<=ei;i++){
        arr[i]=A[i];
    }
    return;
}
void mergeSort(int *arr,int si,int ei){
    if(si>=ei){
        return;
    }
    int mid=(si+ei)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    for(int i=0;i<10;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
    merge(arr,si,mid,ei);
}
int main() {
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=10-i;
    }
    mergeSort(arr,0,9);
    for(int i=0;i<10;i++){
        std::cout<<arr[i]<<" ";
    }
    
    return 0;
}
