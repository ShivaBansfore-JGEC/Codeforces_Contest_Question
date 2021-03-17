#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int mn=INT_MAX;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mn=min(arr[i],mn);
        mx=max(mx,arr[i]);
    }
    if(mn==mx){
        cout<<"-1"<<endl;
    }else{
        int ans=-1;
        int ans1=-1;
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                if(ans<arr[i]){
                    ans=arr[i];
                    ans1=i+1;
                }
            }
        }
        if(arr[n-2]!=arr[n-1]){
            if(ans<arr[n-1]){
                ans1=n;
            }
        }
        cout<<ans1<<endl;
    
    }
}
int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}