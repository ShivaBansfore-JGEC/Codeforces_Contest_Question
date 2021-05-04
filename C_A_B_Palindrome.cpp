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
#define rr return 0
#define ini(a, i) memset(a, i, sizeof(a))
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}


void solve(){
   
   int a,b;
   cin>>a>>b;

   int zero=0,one=0;
   string s;
   cin>>s;

   for(char u:s){
      if(u=='0'){
         zero++;
      }else if(u=='1'){
         one++;
      }
   }


   if(zero>a || one>b){
      cout<<-1<<endl;
      return;
   }

   int i=0,j=s.size()-1;

   while(i<j){
         if(s[i]!='?' && s[j]!='?'){
            if(s[i]!=s[j]){
               cout<<-1<<endl;
               return;
            }
         }

      if(s[i]!='?' && s[j]=='?'){
         if(s[i]=='0'){
               if(zero+1>a){
                  cout<<-1<<endl;
                  return;
               }else{
                  s[j]='0';
                  zero++;
               }
         }else if(s[i]=='1'){

             if(one+1>b){
                  cout<<-1<<endl;
                  return;
               }else{
                  s[j]='1';
                  one++;
               }
         }

      }else if(s[i]=='?' && s[j]!='?'){
         if(s[j]=='0'){
               if(zero+1>a){
                  cout<<-1<<endl;
                  return;
               }else{
                  s[i]='0';
                  zero++;
               }
         }else if(s[j]=='1'){

             if(one+1>b){
                  cout<<-1<<endl;
                  return;
               }else{
                  s[i]='1';
                  one++;
               }
         }
      }
      i++;
      j--;
   }



i=0,j=s.size()-1;

while(i<=j){
   if(i==j){
      if(s[i]=='?'){
         if(zero+1<=a){
            s[i]='0';
            zero++;
         }else if(one+1<=b){
            s[i]='1';
            one++;
         }else{
            cout<<-1<<endl;
            return;
         }
      }
   }else{
      if(s[i]=='?'){
         if(zero+2<=a){
            s[i]='0';
            s[j]='0';
            zero+=2;
         }else if(one+2<=b){
            s[i]='1';
            s[j]='1';
            one+=2;
         }else{
            cout<<"-1"<<endl;
            return;
         }
      }
   }
   i++;
   j--;
}

cout<<s<<endl;

}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}