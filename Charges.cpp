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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    ll tot=0;
    int i=0,j=1;
    while(i<n-1){
        if(s[i]==s[j]){
            tot+=2;
        }else{
            tot+=1;
        }
        i++;
        j++;
    }
    for(int i=0;i<k;i++){
        int idx;
        cin>>idx;
        if(idx==1){
            
            if(s[0]==s[idx]){
                tot-=2;
            }else if(s[0]!=s[idx]){
                tot-=1;
            }

            if(s[0]=='0'){
                s[0]='1';
            }else if(s[0]=='1'){
                s[0]='0';
            }

            if(s[0]==s[idx]){
                tot+=2;
            }else if(s[0]!=s[idx]){
                tot+=1;
            }



        }else if(idx==n){
            if(s[idx-2]==s[idx-1]){
                tot-=2;
            }else if(s[idx-2]!=s[idx-1]){
                tot-=1;
            }

            if(s[idx-1]=='0'){
                s[idx-1]='1';
            }else if(s[idx-1]=='1'){
                s[idx-1]='0';
            }

            if(s[idx-2]==s[idx-1]){
                tot+=2;
            }else if(s[idx-2]!=s[idx-1]){
                tot+=1;
            }
        }else{
            //left
            if(s[idx-1]==s[idx-2]){
                tot-=2;
                tot+=1;
            }else if(s[idx-1]!=s[idx-2]){
                tot-=1;
                tot+=2;
            }

            if(s[idx-1]==s[idx]){
                tot-=2;
                tot+=1;
            }else if(s[idx-1]!=s[idx]){
                tot-=1;
                tot+=2;
            }
            if(s[idx-1]=='0'){
                s[idx-1]='1';
            }else{
                s[idx-1]='0';
            }

        }
        cout<<tot<<endl;
    }


}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}