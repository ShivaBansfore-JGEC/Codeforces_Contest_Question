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
    ll n,m,k;
    cin>>n>>m>>k;

    int x=1,y=1;
    vector<pair<int,int>> p;
    int cnt=1;
    p.push_back({x,y});
    while(cnt<(n*m)){
        if(x%2!=0){
            y++;
            cnt++;
            p.push_back({x,y});
        }else{
            y--;
            cnt++;
            p.push_back({x,y});
        }

        if(y==m && cnt<(n*m) && x%2!=0){
            x++;
            p.push_back({x,y});
            cnt++;
        }else if(y==1 && cnt<(n*m) && x%2==0){
            x++;
            p.push_back({x,y});
            cnt++;
        }

    }


    // for(auto pp:p){
    //     cout<<pp.first<<" "<<pp.second<<" ";
    // }
    // cout<<endl;


    ll sz=p.size();
    if(sz%k==0){
        int i=0,cnt1=0,f=0;
        while(i<(sz-(sz%k))){
            if(cnt1==0)
                cout<<ceil(1.0*sz/k*1.0)<<" ";


            cout<<p[i].first<<" "<<p[i].second<<" ";
            cnt1++;
            if(ceil(1.0*sz/k*1.0)==cnt1){
                cnt1=0;
                cout<<endl;
            }

            i++;
        }

    }else{
        int i=0,cnt1=0,f=0;
        while(i<(sz/k*(k-1))){
            if(cnt1==0)
                cout<<sz/k<<" ";


            cout<<p[i].first<<" "<<p[i].second<<" ";
            cnt1++;
            if(sz/k==cnt1){
                cnt1=0;
                cout<<endl;
            }

            i++;
        }
        if(i<sz){
            if((sz-i)>0){
                cout<<sz-i<<" ";
                while(i<sz){
                    cout<<p[i].first<<" "<<p[i].second<<" ";
                    i++;
                }

                cout<<endl;
            }
        }
    }
}

int main(){
   fio;
   int t=1;
   //cin>>t;
   while(t--) solve();
return 0;
}