#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int zero=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]==0){
            zero++;
        }
    }
    if(sum!=0 and zero==0){
        cout<<zero<<endl;
    }
    if(sum!=0 && zero>0){
         int s=sum+zero;
        if(s==0){
            cout<<zero+1<<endl;
        }else{
            cout<<zero<<endl;
        }
    }
    if(sum==0 && zero==0){
        cout<<1<<endl;
    }
    if(sum==0 && zero>0){
        int s=sum+zero;
        if(s==0){
            cout<<zero+1<<endl;
        }else{
            cout<<zero<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}