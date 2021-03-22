#include<bits/stdc++.h>
using namespace std;

int findXOR(long long n)
{
    int mod = n % 4;
 
    // If n is a multiple of 4
    if (mod == 0)
        return n;
 
    // If n % 4 gives remainder 1
    else if (mod == 1)
        return 1;
 
    // If n % 4 gives remainder 2
    else if (mod == 2)
        return n + 1;
 
    // If n % 4 gives remainder 3
    else if (mod == 3)
        return 0;
}
 
int findXOR(long l,long long r)
{
    return (findXOR(l - 1) ^ findXOR(r));
}

void solve(){
    long long n,m,k;
    cin>>n>>m>>k;
    long long ans;
    long long l=k+2,r=k+1+m;
    ans=findXOR(l,r);
    long long i=2;
    while(i<=n){
        l=k+i+1;
        r=k+i+m;
        long long val=findXOR(l,r);
        ans^=val;
        i++;
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}