#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        p.push_back({x,y});
    }
    int tm[n];
    for(int i=0;i<n;i++){
        cin>>tm[i];
    }
    int arival=0,dp=0;

    for(int i=0;i<p.size();i++){
        int wait;
        if(i==0){
            arival=dp+(p[i].first-0)+tm[i];
        }else{
            arival=dp+(p[i].first-p[i-1].second)+tm[i];
        }

        wait=abs(p[i].second-p[i].first);
        wait=ceil((double) wait/2.0);
        dp=arival+wait;
        dp=max(dp,p[i].second);
    
    }

    cout<<arival<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}