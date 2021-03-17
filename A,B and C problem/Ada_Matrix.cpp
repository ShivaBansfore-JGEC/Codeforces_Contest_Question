#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 

void solve(){
    
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    bool already_sorted=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[i][j]>arr[i][j+1]){
                already_sorted=0;
                break;
            }
            if(i>0 && j==0){
                if(arr[i-1][n-1]>arr[i][j]){
                    already_sorted=0;
                    break;
                }
            }
        }
    }
    if(already_sorted==1){
        cout<<0<<endl;
        return;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j][i]>arr[j+1][i]){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    if(cnt==0){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }
    
}

 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}