#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    long long op=0,eq=0;

    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            op++;
        }else if(a[i-1]==a[i]){
            eq++;
        }
    }

    long long ans=op;
    if(ans>n/2){
        ans=n-ans;
        ans-=eq;
    }

    cout<<ans<<endl;

    if(op>n/2){
        cout<<3<<" "<<n<<" "<<(1ll<<30)-1<<endl;
        for(int i=0;i<n;i++){
            a[i]^=(1ll<<30)-1;
        }
    }

    for(int i=n-1;i>0;i--){
        if(a[i]<a[i-1]){
            cout<<2<<" "<<i+1<<" "<<(1ll<<30)-1<<endl;
        }
    }

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}