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


bool is_palindrome(string s,int n){
    int i=0,j=n-1;

    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }

        i++;
        j--;
    }

    return true;
}


void put1(string &s,int n,int &tot_one){
    int i=0;
    while(i<n){
        if(s[i]=='0' && s[n-i-1]=='1'){
            s[i]='1';
            return;
        }
        i++;
    }

    i=0;

    while(i<n){
        if(s[i]=='0'){
            s[i]='1';
            break;
        }
        i++;
    }

}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int tot_one=0;
    for(char u:s){
        if(u=='1'){
            tot_one++;
        }
    }

    int alice=0,bob=0;



    bool rev_flag=0;
    int flag=0;
    while(true){
        if(tot_one==n){
            break;
        }

        if(is_palindrome(s,n)==false && rev_flag==0){
            rev_flag=1;
        }else{
            //put 1
            put1(s,n,tot_one);
            if(flag==0){
                alice++;
            }else{
                bob++;
            }
            tot_one++;
            rev_flag=0;

        }

        flag^=1;   
    }

    if(alice==bob){
        cout<<"DRAW"<<endl;
    }else if(alice<bob){
        cout<<"ALICE"<<endl;
    }else{
        cout<<"BOB"<<endl;
    }

}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}