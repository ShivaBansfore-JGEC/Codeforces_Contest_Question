#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int i=0;
    int j=n-1;
    int left=-1;
    int right=-1;
    for(int i=0;i<n;i++){
        if(arr[i]=='1'){
            left=i;
            break;
        }
    }
for(int j=n-1;j>=0;j--){
        if(arr[j]=='0'){
            right=j;
            break;
        }
    }
    if(right<left || left==-1 || right==-1){
        for(int i=0;i<n;i++) cout<<arr[i];
        cout<<endl;
        return;
    }else{
        for(int i=0;i<left;i++) cout<<arr[i];
        for(int j=right;j<n;j++) cout<<arr[j];
        cout<<endl;
    }
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}