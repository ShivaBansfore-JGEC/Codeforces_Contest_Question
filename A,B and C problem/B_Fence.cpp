#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
int fre[150000];
int prefix[150000];
void solve(){

    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    prefix[1]=arr[1];
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    for(int i=k;i<=n;i++){
        fre[i]=(prefix[i]-prefix[i-k]);
    }
    int mn=INT_MAX;
    int id=-1;
    for(int i=k;i<=n;i++){
        if(mn>fre[i]){
            mn=fre[i];
            id=i;
        }
    }

    cout<<abs(id-k)+1<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}