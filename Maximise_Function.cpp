#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        int val;
        if(arr[i]<0){
            arr[i]=(arr[i]*-1);
        }
    }

    sort(arr,arr+n);
    long long x=arr[0],y=arr[n-1];
    //find z

    long long z,val=INT_MIN;
    for(int i=1;i<n-1;i++){
        long long z=arr[i];
        int sum=(long long)(abs(x-y)+abs(y-z)+abs(x-z));
        if(sum>val){
            z=arr[i];
            val=sum;
        }
    }
    cout<<val<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}