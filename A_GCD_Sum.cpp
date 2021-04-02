#include<bits/stdc++.h>
using namespace std;

long long sumofdigit(long long n){
    long long sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

void solve(){
    long long n;
    cin>>n;
    while(true){
        long long val=__gcd(n,sumofdigit(n));
        if(val>1){
            cout<<n<<endl;
            return;
        }
        n++;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}