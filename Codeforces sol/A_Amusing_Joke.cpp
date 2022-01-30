#include<bits/stdc++.h>
using namespace std;
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    c_p_c();
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1.length()+s2.length()==s3.length()){
        string s4=s1+s2;
        sort(s4.begin(),s4.end());
        sort(s3.begin(),s3.end());
        // cout<<s4<<'\n'<<s3<<endl;
        if(s4==s3){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
}