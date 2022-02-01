#include<bits/stdc++.h>
using namespace std;
#define m1 1000000
bool compareInterval(pair<int,int> &i1, pair<int,int> &i2)
{
    return (i1.first < i2.first);
}
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
    int n,cp;
    cin>>n>>cp;
    if(cp>=1000000){
        cout<<-1<<endl;
        return 0;
    }
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y,p;
        cin>>x>>y>>p;
        v.push_back({(x*x)+(y*y),p});
    }
    sort(v.begin(),v.end(),compareInterval);
    // for(int i=0;i<n;i++){
    //     cout<<v[i].first<<v[i].second<<endl;
    // }
    for(int i=0;i<v.size();i++){
        cp+=v[i].second;
        if(cp>=m1){
            cout<<fixed << setprecision(10)<<pow(v[i].first,0.5)<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}