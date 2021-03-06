#include<bits/stdc++.h>
using namespace std;
const int N=100;
vector<int> graph[N];

int nums[N];


void dfs(int u,int p){
    nums[u]=(nums[p]&1)?2:1;
    for(auto c:graph[u]){
        if(c!=p){
            dfs(c,u);
        }
    }

}

void solve(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    nums[0]=1;
    dfs(1,0);
    for(int i=1;i<=n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<"\n";

    for(int i=0;i<=n;i++){
        graph[i].clear();
    }



}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}