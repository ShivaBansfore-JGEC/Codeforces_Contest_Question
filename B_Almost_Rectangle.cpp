
// Author : Shiva Bansfore
// College : Jalpaiguri Government Engineering College
// Venue : Siliguri,West Bengal
 
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
    int n;
    cin>>n;
    char s[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>s[i][j];
        }
    }
    int flag1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //check if both lies in same coloumn
            if(s[i][j]=='*'){
                flag1=1;
                int flag2=0;
                for(int k=i+1;k<n;k++){
                    if(s[k][j]=='*'){
                        if(j<n-1){
                            s[k][j+1]='*';
                            s[i][j+1]='*';
                        }else{
                            s[k][j-1]='*';
                            s[i][j-1]='*';

                        }
                        flag2=1;
                        break;
                    }
                    if(flag2==1){
                        break;
                    }
                }
                flag2=0;

                //check pos for colomn and check row if there exist any * in row

                for(int k=i+1;k<n;k++){
                        //check in the row 
                        for(int l=0;l<n;l++){
                            if(s[k][l]=='*'){
                                s[k][j]='*';
                                flag2=1;
                                break;
                            }
                        }
                        if(flag2==1) break;
                }

                flag2=0;

                for(int k=i-1;k>=0;k++){
                        for(int l=0;l<n;l++){
                            if(s[k][l]=='*'){
                                s[k][j]='*';
                                flag2=1;
                                break;
                            }
                        } 
                        if(flag2==1) break;  
                }
                flag2=0;

                //now check for row val 

                for(int k=0;k<n;k++){
                    if(k!=j){
                        for(int l=0;l<n;l++){
                            if(s[l][k]=='*'){
                                s[i][k]='*';
                                flag2=1;
                                break;
                            }
                        }
                        if(flag2==1){
                            break;
                        }
                    }
                }




            }
            if(flag1==1){
                break;
            }

        }

        if(flag1==1){
            break;
        }
   
    }
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<s[i][j];
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