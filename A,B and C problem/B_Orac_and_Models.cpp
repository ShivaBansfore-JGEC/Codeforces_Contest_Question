#include<bits/stdc++.h>
using namespace std;
int n;
int arr[100004];
int dp[100004];

int models(int pos){
    if(pos>n) return 0;
    if(dp[pos]!=-1) return dp[pos];

    int count=0;
    for(int i=2*pos;i<=n;i+=pos){
        if(arr[i]>arr[pos]){
            count=max(count,(1+models(i)));
        }
    }
    return dp[pos]=count;
}

void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        dp[i]=-1;
    }
    int mx=1;
    for(int i=1;i<=n;i++){
        mx=max(mx,1+models(i));
    }
    cout<<mx<<endl;
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}