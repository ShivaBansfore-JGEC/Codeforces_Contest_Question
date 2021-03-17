#include<bits/stdc++.h>
#define ll long long 
const int MOD = 1e9+7;
using namespace std;
ll fact[1000001];
void factorial(){
    fact[0]=fact[1]=1;
    for(int i=2;i<1000001;i++){
        fact[i]=(fact[i-1]%MOD*i%MOD)%MOD;
    }
}

ll pow_mod(ll base,ll power)
{
    ll res=1;
    while(power)
    {
        if(power&1)
            (res*=base)%=MOD;
        power>>=1;
        ((base*=base)%=MOD);
    }
    return (res%MOD);
 
}

void solve(){

    ll n;
    cin>>n;
    ll ans=fact[n]-pow_mod(2,n-1);
    ans%=MOD;
    cout<<(ans+MOD)%MOD<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    factorial();
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}