#include<bits/stdc++.h>
using namespace std;


void solve(){
  
    int n,x;
    cin>>n>>x;

    int arr[n];
    int odd=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]&1) odd++;
    }

    if(odd==0 || (x==n && odd%2==0) || (odd==n && x%2==0)){
        cout<<"No"<<endl;

    }else{
        cout<<"Y"<<endl;
    }
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}