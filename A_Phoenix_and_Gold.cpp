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


void solve(){

    ll n,x;
    cin>>n>>x;

    vector<ll> a(n);
    ll mn=INT_MAX,mx=INT_MIN;
    ll s=0;
    bool flag=0;
    fr(i,0,n){
        cin>>a[i];
        if(a[i]>x){
            flag=1;
        }
        s+=a[i];
    }

    if(s==x){
        cout<<"NO"<<endl;
        return;
    }

    if(x>s){
        cout<<"YES"<<endl;
        for(int u:a){
            cout<<u<<" ";
        }
        cout<<endl;
    }else{
        sort(all(a));
        ll sum=0;
        vector<bool> vis(n,false);
        vector<ll> ans;
        for(int i=0;i<n;i++){
            if(sum+a[i]!=x){
                ans.push_back(a[i]);
                vis[i]=true;
                sum+=a[i];
            }
        }

        for(int i=0;i<n;i++){
            if(vis[i]==false){
                ans.push_back(a[i]);
            }
        }

        cout<<"YES"<<endl;
        for(int u:ans){
            cout<<u<<" ";
        }

        cout<<endl;
    }


}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}