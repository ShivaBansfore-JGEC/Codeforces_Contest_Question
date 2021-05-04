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


struct p{
    ll u,s;
};


bool compare1(const p p1,const p p2){
    if(p1.u<p2.u){
        return true;
    }
    
    if(p1.u==p2.u){
        return p1.s>p2.s;
    }

    return false;
}


void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n+1),b(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
        cin>>b[i];
    }

    vector<p> arr(n+1);
    for(int i=1;i<=n;i++){
        p pp;
        pp.u=a[i];
        pp.s=b[i];
        arr[i]=pp;
    }

    sort(all(arr),compare1);

    vector<ll> pre_sum(n+1);
    pre_sum[1]=arr[1].s;

    for(int i=2;i<=n;i++){
        pre_sum[i]=pre_sum[i-1]+arr[i].s;
    }


    map<ll,ll> uid,fre;
    ll maxi=INT_MIN;
    for(int i=1;i<=n;i++){
        if(uid[arr[i].u]==0){
            uid[arr[i].u]=i;
        }
        fre[arr[i].u]++;

        maxi=max(fre[arr[i].u],maxi);

    }

    vector<ll> res(n,0);
    ll j=0;

    for(int k=1;k<=n;k++){
        if(k>maxi){
            break;
        }
        ll ans=0;
        for(auto mpp:uid){
            ll sz=fre[mpp.first];
            if(sz<k){
                continue;
            }
            ll id=(sz-(sz%k))-1;
            ans+=pre_sum[mpp.second+id]-pre_sum[mpp.second-1];
        }

        res[j]=ans;
        j++;
    }

    for(ll u:res){
        cout<<u<<" ";
    }

    cout<<endl;

}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}