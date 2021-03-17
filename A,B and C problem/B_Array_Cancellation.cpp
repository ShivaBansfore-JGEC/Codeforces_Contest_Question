#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 

void solve(){

    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    ll bal=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            bal+=arr[i];
        }else if(arr[i]<0){
            if(bal>=abs(arr[i])){
                bal+=arr[i];
                arr[i]=0;
            }else{
                arr[i]=arr[i]+bal;
                bal=0;
            }
        }
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans+=abs(arr[i]);
        }
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