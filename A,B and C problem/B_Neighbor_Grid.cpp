#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    bool f=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if((i==0 and j==0) || (i==0 and j==m-1) || (i==n-1 and j==0) || (i==n-1 and j==m-1)){
                if(arr[i][j]>2){
                    f=1;
                }
            }else if((i==0) or (j==0) or (i==n-1) or (j==m-1)){
                if(arr[i][j]>3) f=1;
            }else{
                if(arr[i][j]>4) f=1;
            }

        }
    }
    if(f==1){
        cout<<"NO"<<endl;
        return;
    }else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 and j==0) || (i==0 and j==m-1) || (i==n-1 and j==0) || (i==n-1 and j==m-1)){
                    arr[i][j]=2;
                }else if((i==0) or (j==0) or (i==n-1) or (j==m-1)){
                    arr[i][j]=3;
                }else{
                    arr[i][j]=4;
                }
                cout<<arr[i][j]<<" ";

            }
            cout<<endl;
        }
    }
    
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}