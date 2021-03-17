#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n%2!=0){
        cout<<"NO"<<endl;
    }else{
        int flag=1;
        for(int i=0;i<=n-2;i+=2){
            if(arr[i]!=arr[i+1]){
                flag=0;
                break;
            }
        }
        int i=0;
        int j=n-1;
        
        if(flag==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}