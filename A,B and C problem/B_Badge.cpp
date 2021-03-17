#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector<int> g[1005];
bool visited[1005];
void solve(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        g[i].push_back(x);
        g[x].push_back(i);
        arr[i]=x;
    }

    for(int i=1;i<=n;i++){
        int node=i;
        memset(visited,false,sizeof visited);
        while(visited[node]==false){
            visited[node]=true;
            node=arr[node];
        }
        cout<<node<<" ";
    }
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}