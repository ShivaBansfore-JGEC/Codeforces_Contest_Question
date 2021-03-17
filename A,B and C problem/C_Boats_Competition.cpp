#include<bits/stdc++.h>
using namespace std;

int teams(vector<int> arr,int n,int target){
    int t=0;
    int visited[51]={0};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(visited[j]==0 && visited[i]==0){
                if(arr[i]+arr[j]==target){
                    t++;
                    visited[j]=1;
                    visited[i]=1;
                }
            }else{
                continue;
            }

        }
    }
    return t;
}

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int wt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        wt+=arr[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int mx=1;
    for(int i=1;i<1000;i++){
        int v=teams(arr,n,i);
        if(mx<v){
            mx=v;
        }
    }

    cout<<mx<<endl;

   
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}