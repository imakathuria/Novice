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
    string s1,s;
    cin>>s1;
    int i=0;
    while(i<s1.size()){
        if(s1[i]!='+'){
            s+=s1[i];
        }
        i++;
    }
    sort(s.begin(),s.end());
    for(int i=0;i<s.size()-1;i++){
        cout<<s[i]<<'+';
    }
    cout<<s[s.size()-1]<<endl;
}