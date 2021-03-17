#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector<ll> a;
void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pre[n];
    for(int i=0;i<n;i++){
        pre[i]=0;
    }

    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i] and arr[i]>arr[i+1]){
            pre[i]=pre[i-1]+1;
        }else{
            pre[i]+=pre[i-1];
        }
    }
    int p=0;
    int l1=0;
    for(int l=0;l<n-k+1;l++){
        int val=pre[l+k-2]-pre[l];
        if(p<val){
            p=val;
            l1=l;

        }
    }
    cout<<p+1<<" "<<l1+1<<endl;
  
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}