#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 

void solve(){

    int n;
    cin>>n;
    int arr[n];
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mn=min(mn,arr[i]);
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]%mn==0){
            cnt++;
        }
    }
    int mis_place=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) mis_place++;
    }
    if(cnt/2>=mis_place){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}