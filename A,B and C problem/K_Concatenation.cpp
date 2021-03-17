#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll kadans(int arr[],int n){

    ll max_so_far=INT_MIN;
    ll ending_here=0;
    for(int i=0;i<n;i++){
        ending_here=ending_here+arr[i];
        if(max_so_far<ending_here){
            max_so_far=ending_here;
        }

        if(ending_here<0){
            ending_here=0;
        }
    }
    return max_so_far;   
}
void solve(){
    int n,k;
    cin>>n>>k;
    int size=n;
    if(k>1) size=2*n;
    int arr[size];
    for(int i=0;i<n;i++) cin>>arr[i];
    int arr2[n*2];
    if(size==2*n){
        for(int i=n;i<2*n;i++){
            arr[i]=arr[i-n];
        }
    }

    ll mx2=kadans(arr,size);
     ll sum=0;
     for(int i=0;i<n;i++){
         sum+=arr[i];
     }
     ll ans;
     if(sum>0 && k>1){
         ans=mx2+(k-2)*sum;
     }else ans=mx2;
     cout<<ans<<endl;
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}