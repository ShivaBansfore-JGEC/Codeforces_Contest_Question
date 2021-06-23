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

struct data{
    ll p,d;
};

bool compare(const data d1,const data d2){
    return d1.d > d2.d;
}


void solve(){
    ll n;
    cin>>n;
    vector<data> a(n);
    ll total_item=0;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        a[i].p=x;
        a[i].d=y;
        total_item+=x;
    }

    sort(all(a),compare);

    int j=a.size()-1;
    int i=0;
    ll items=0;
    ll ans=0;

    while(items < total_item){
        if(j<0){
            break;
        }

        if(i>n){
            break;
        }

        if(items >= a[j].d){
            //cout<<a[i].p<<"--->"<<a[i].d<<endl;
            ans+=a[j].p;
            items+=a[j].p;
            a[j].p=0;
            j--;
        }else{
            // cout<<a[i].p<<"--->"<<a[i].d<<endl;
            ll diff=a[j].d-items;

            if(diff>=a[i].p){
                ans+=(a[i].p*2);
                items+=a[i].p;
                i++;
            }else{
                a[i].p-=diff;
                ans+=(diff*2);
                items+=diff;
            }
      
        }
    }

    cout<<ans<<endl;

}

int main(){
   fio;
   int t=1;
  // cin>>t;
   while(t--) solve();
return 0;
}