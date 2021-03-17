#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    long long sum=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=s){
            sum+=arr[i];
            cnt++;
        }
    }
    cout<<n-cnt<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}