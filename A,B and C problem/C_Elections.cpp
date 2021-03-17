#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool compare(pair<int,int> a,pair<int,int> b){

    return a.second<b.second;
}
int fre[3005];
void solve(){
    int n,m,x,y;
    cin>>n>>m;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    vector<pair<int,int>> p;
    int mx=0;
    int mx_p=-1;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        fre[x]++;
        p.push_back(make_pair(x,y));
    }
    sort(p.begin(),p.end(),compare);

    for(int i=1;i<=n;i++){
        if(fre[i]>mx){
            mx=fre[i];
            mx_p=i;
        }
    }
        cout<<mx_p<<" "<<mx<<endl;

    vector<int> a;

    int ans=0;
    for(int i=0;i<p.size();i++)
    {
        if(p[i].first==mx_p){
            a.push_back(p[i].second);
        }
    }
    int k=0;
    ll cost=0;
    for(int i=0;i<p.size();i++)
    {
        if(ans>mx_p){
            break;
        }
        if(p[i].first==1){
            ans++;
        }else{
            if(cost+p[i].second<cost+a[k]){
                cost+=p[i].second;
                ans++;
            }else{
                cost+=a[k];
                k++;
                ans++;
                mx_p--;
            }
        }
    }

    cout<<cost<<endl;



}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    while(t--){
        solve();
    }

    return 0;
}