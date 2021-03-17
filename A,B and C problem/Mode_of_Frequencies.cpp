#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int fre[11];
int fre1[10002];
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=10;i++) fre[i]=0;
    for(int i=1;i<10001;i++) fre1[i]=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        fre[arr[i]]++;
    }

    for(int i=1;i<11;i++){
        if(fre[i]>0){
            fre1[fre[i]]++;
        }
    }
    int mx=INT_MIN;
    int ans=0;
    for(int i=1;i<10002;i++){
        if(mx<fre1[i]){
            mx=fre1[i];
            ans=i;
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