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
    vector<pair<string,int>>v;

    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='A' && s[i+1]=='B')
        {
            v.push_back({"AB",i});
        }else if(s[i]=='B' && s[i+1]=='A'){
            v.push_back({"BA",i});
        }
    }
    if(s.size()<=3){
        cout<<"NO"<<endl;
    }else if(s=="ABAB" || s=="BABA"){
        cout<<"NO"<<endl;
    }else if(v.size()<=1){
        cout<<"NO"<<endl;
    }else if(v.size()==2){
        if(abs(v[1].second-v[0].second)<=1){
            cout<<"NO"<<endl;
        }else{
            if(v[0].first=="AB" && v[1].first=="BA"){
                cout<<"YES"<<endl;
            }else if(v[0].first=="BA" && v[1].first=="AB"){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }else{
        bool flag=0;
        for(int i=0;i<v.size()-1;i++){
            if(abs(v[i].second-v[i+1].second)>1){
                flag=1;
            }
        }

        if(flag==0 && v.size()==3){
            cout<<"NO"<<endl;
            return;
        }

        map<string,int> mpp;
        for(auto u:v){
            mpp[u.first]++;
        }

        if(mpp["AB"]>0 && mpp["BA"]>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
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