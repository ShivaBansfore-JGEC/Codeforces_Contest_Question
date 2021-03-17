#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prefend=-1,suffixend=n;
    for(int i=0;i<n;++i){
        if(arr[i]<i) break;
        prefend=i;
    }
    for(int i=n-1;i>=0;--i){
        if(arr[i]<(n-1)-i) break;
        suffixend=i;
    }
    if(suffixend<=prefend){
        cout<<"Yes"<<endl;
    }else cout<<"No"<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}