#include<bits/stdc++.h>
using namespace std;
int box[1025];
bool check(int arr[],int n,int k){
    for(int i=0;i<n;i++) box[arr[i]]=0;

    for(int i=0;i<n;i++){
        int val=arr[i]^k;
        box[val]++;
    }

    for(int i=0;i<n;i++){
        if(box[arr[i]]==0){
            return false;
        }
    }
    return true;
}

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int ans=-1;
    for(int i=0;i<n;i++) cin>>arr[i];
    int m=1024;
    for(int i=1;i<1024;i++){
        if(check(arr,n,i)==true){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}