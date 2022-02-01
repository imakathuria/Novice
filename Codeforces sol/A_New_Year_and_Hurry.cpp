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
    int n,k;
    cin>>n>>k;
    int timeleft=240-k;
    bool flag=0;
    for(int i=1;i<=n;i++){
        if((timeleft-(i*5))<0){
            flag=1;
            cout<<i-1<<endl;
            break;
        }
        timeleft=timeleft-5*i;
    }
    if(!flag)cout<<n<<endl;
    return 0;
}