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

bool operation(ll len,ll s,ll n){

    ll maxi=0,mini=0;
    int d=1,c=n;
        for(int i=0;i<len;i++){
            maxi+=c;
            mini+=d;
            d++;
            c--;
        }

        if(s<mini ||  s>maxi){
            return false;
        }else{
            return true;
        }

}



void solve(){
    ll n,l,r,s;
    cin>>n>>l>>r>>s;

    ll maxi=0,mini=0;
    ll len=(r-l)+1;
    int d=1,c=n;
    for(int i=0;i<len;i++){
        maxi+=c;
        mini+=d;
        d++;
        c--;
    }

    if(s<mini ||  s>maxi){
        cout<<-1<<endl;
        return;
    }
    vector<ll> v;
    map<ll,ll> mpp;
    for(int i=n;i>=1;i--){
        if(operation(len-1,s-i,i-1)){
            s=s-i;
            len--;
            v.push_back(i);
            mpp[i]++;
        }
        if(s==0){
            break;
        }
    }

    if(s!=0){
        cout<<-1<<endl;
        return;
    }

    vector<int> ans(n,0);
    int k=0;
    for(int i=l-1;i<=r-1;i++){
        ans[i]=v[k];
        k++;
    }

    k=0;
    for(int i=1;i<=n;i++){
        if(mpp[i]==0){
            for(int j=0;j<ans.size();j++){
                if(ans[j]==0){
                    ans[j]=i;
                    break;
                }
            }
        }
    }


    for(int u:ans){
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