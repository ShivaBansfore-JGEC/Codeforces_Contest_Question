// Author : Shiva Bansfore
// College : Jalpaiguri Government Engineering College
// Address : Siliguri,West Bengal

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
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
#define rr return 
#define ini(a, i) memset(a, i, sizeof(a))
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}


void solve(){

    ll n,m;
    cin>>n>>m;
    bool flag=0;
    vector<ll> cur(m);

    for(int i=0;i<n;i++){
        vector<ll> a(m),ans(m,-1);
    
        for(int j=0;j<m;j++){
            cin>>a[j];
        }

        if(i==0){
            sort(a.begin(),a.end());
            for(int j=0;j<m;j++){
                cout<<a[j]<<" ";
                cur[j]=a[j];
                ans[j]=a[j];
                cur[j]=a[j];
            }
            cout<<endl;
        }else{
            sort(a.begin(),a.end());
            vector<bool>vis(m,false);
            for(int u:a){
                int mx=INT_MIN,id=-1;
                for(int j=0;j<m;j++){
                    if(vis[j]==false && mx<=cur[j]){
                        mx=cur[j];
                        id=j;
                    }
                }
                

                ans[id]=u;
                cur[id]=u;
                vis[id]=true;

            }

            for(int v:ans){
                cout<<v<<" ";
            }

            cout<<endl;
            
        }

    }


}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}