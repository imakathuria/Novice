#define pb push_back
class Solution {
public:
    int merge(vector<int>&arr,int si,int mid,int ei){
        int count=0,j=mid+1;
        for(int i=si;i<=mid;i++){
            while(j<=ei and (arr[i]>2LL*arr[j])){
                j++;
            }
            count+=(j-mid-1);
        }
        int i=si;
        j=mid+1;
        vector<int> temp;
        while(i<=mid and j<=ei){
            if(arr[i]<=arr[j]){
                temp.pb(arr[i++]);
            }else{
                temp.pb(arr[j++]);
            }
        }
        while(i<=mid){
            temp.pb(arr[i++]);
        }
        while(j<=ei){
            temp.pb(arr[j++]);
        }
        for(int i=si;i<=ei;i++){
            arr[i]=temp[i-si];
        }
        return count;
        
    }
    int mergesort(vector<int>&arr,int si,int ei){
        if(si>=ei){
            return 0;
        }
        int mid =(ei+si)/2;
        int Lans = mergesort(arr,si,mid);
        int Rans = mergesort(arr,mid+1,ei);
        int Pa = merge(arr,si,mid,ei);
        return Lans + Rans + Pa;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};