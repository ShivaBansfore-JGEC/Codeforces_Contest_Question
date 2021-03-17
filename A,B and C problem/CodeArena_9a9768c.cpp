#include<bits/stdc++.h>
#define ll long long 
int mod=1000000007;
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=0;
    int ans=0;
    int ans1=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(mx==0)
                mx=arr[i];
            ans1+=mx-arr[i+1];
        }else{
            ans+=ans1;
            ans1=0;
            mx=0;
        }
        
    }
    cout<<ans%mod<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}