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
    string s;
    cin>>s;
    int one=0,q=0;
    for(int c:s){
        if(c=='?'){
            q++;
        }else if(c=='1'){
            one++;
        }
    }

    if(one==10){
        cout<<10<<endl;
        return;
    }

    if(q==10){
        cout<<6<<endl;
        return;
    }
    
    int a[10][2];

    for(int i=0;i<10;i++){
        if((i-2)>=0){
            if(s[i]=='?'){
                a[i][0]=a[i-2][0]+0;
                a[i][1]=a[i-2][1]+1;
            }else{
                a[i][0]=a[i-2][0]+(s[i]-'0');
                a[i][1]=a[i-2][1]+(s[i]-'0');
            }

        }else{
            if(s[i]=='?'){
                a[i][0]=0;
                a[i][1]=1;
            }else{

                a[i][0]=s[i]-'0';
                a[i][1]=s[i]-'0';
            }
        }
    }

    for(int i=0;i<10;i++){
        if(i-1 < 0) continue;
        if(max(a[i][0],a[i][1]) > (min(a[i-1][0],a[i-1][1])+(ceil(((9-i)*1.0))/2.0)) ){
            
            cout<<i+1<<endl;
            return;
        }else if((min(a[i][0],a[i][1])+(ceil(((9-i)*1.0))/2.0)) < max(a[i-1][0],a[i-1][1]) ){
            cout<<i+1<<endl;
            return;
        }
    }


cout<<10<<endl;



  
    





}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}