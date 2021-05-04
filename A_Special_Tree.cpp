// Author : Shiva Bansfore
// College : Jalpaiguri Government Engineering College
// Address : Siliguri,West Bengal

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define all(a) a.begin(),a.end()
#define pie 3.1415926535898
#define mod (ll)(998244353)
#define MOD (int) 1e9+7
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=b-1;i>=a;i--)
#define vi vector<int>
#define vii vector<vector<>> 
#define mp map<ll,ll> 
#define inf (ll)(1e18)
#define inff INT_MIN 
#define pb emplace_back
#define sz(s) s.size()
#define ff first
#define ss second
#define bits(n) __builtin_popcount(n)
#define rr return 0
#define ini(a, i) memset(a, i, sizeof(a))
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}

vector<int> edges[200005];

int minEdgeBFS(int u,int v, int n)
{
    // visited[n] for keeping track of visited
    // node in BFS
    vector<bool> visited(n, 0);
 
    // Initialize distances as 0
    vector<int> distance(n, 0);
 
    // queue to do BFS.
    queue <int> Q;
    distance[u] = 0;
 
    Q.push(u);
    visited[u] = true;
    while (!Q.empty())
    {
        int x = Q.front();
        Q.pop();
 
        for (int i=0; i<edges[x].size(); i++)
        {
            if (visited[edges[x][i]])
                continue;
 
            // update distance for i
            distance[edges[x][i]] = distance[x] + 1;
            Q.push(edges[x][i]);
            visited[edges[x][i]] = 1;
        }
    }
    return distance[v];
}

void solve(){
    ll n,k,a;
    cin>>n>>k>>a;
    map<ll,ll> spcl;
    vector<ll> sp(k);
    for(int i=0;i<k;i++){
        int s;
        cin>>s;
        sp[i]=s;
        spcl[s]++;
    }


    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    vector<int> arr1(n+1),arr2(n+1);
    for(int b=1;b<=n;b++){
        int d=0,s;
        for(int i=0;i<k;i++){
            int u=sp[i];
            int dif=minEdgeBFS(a,u,n)-minEdgeBFS(b,u,n);
            
            if(dif>d){
                d=dif;
                s=u;
            }
        }

        arr1[b]=d;
        arr2[b]=s;
    }

    for(int i=1;i<=n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    for(int i=1;i<=n;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--){
       solve();
       edges->clear();
   }
return 0;
}