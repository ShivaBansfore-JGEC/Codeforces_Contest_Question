#include<bits/stdc++.h>
using namespace std;



void solve(){
    int n;
    cin>>n;
    int box[51];
    int arr[2*n];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
        box[arr[i]]=0;
    }

    for(int i=0;i<2*n;i++){
        if(box[arr[i]]==0){
            cout<<arr[i]<<" ";
            box[arr[i]]=1;
        }
    }
    cout<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}