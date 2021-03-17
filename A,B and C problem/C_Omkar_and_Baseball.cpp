#include<bits/stdc++.h>
#define ll long long 
using namespace std;



void solve(){

    int n;
    cin>>n;

    int arr[n];
    int cnt=0;
    arr[0]=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(is_sorted(arr,arr+n)){
        cout<<0<<endl;
        return;
    }
    int ans=0;
    for(int i=1;i<n-1;i++){
        if(arr[i]==i+1) ans++;
    }
    cout<<ans<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}