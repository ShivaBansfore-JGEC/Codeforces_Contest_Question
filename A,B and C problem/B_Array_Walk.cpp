#include<bits/stdc++.h>
using namespace std;

long long n,k,z;
long long dp[100002][6];
long long walk(vector<long long> &arr,int i,int kk,int zz)
{
    if(kk==0 || i>=n || i<0 )
    return 0;

    if(dp[i][zz]!=-1)
    return dp[i][zz];

    long long ans=0;
    if(i<n){
        ans=max(ans,arr[i]+walk(arr,i+1,kk-1,zz));
    }
    if(i>=0 && zz>0){
        ans=max(ans,arr[i]+walk(arr,i-1,kk-1,zz-1));
    }
    return dp[i][zz]=ans;

}

void solve(){
    cin>>n>>k>>z;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    memset(dp,-1,sizeof(dp));
    long long ans=walk(arr,1,k,z)+arr[0];
    cout<<ans<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}