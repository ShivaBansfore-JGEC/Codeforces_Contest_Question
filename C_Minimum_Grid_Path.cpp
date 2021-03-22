#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    int id1,id2;
    int s=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        int sum=arr[i]+arr[i+1];
        if(sum<s){
            s=sum;
            id1=i;
            id2=i+1;
        }
    }

    int i=0,x=0,y=0;
    long long ans=0;
    bool flag=0;
    while(i<id1){
        if(flag==0){
            if(x<n){
                ans+=arr[i];
                x++;
            }
            flag=1;
        }else{
            if(y<n){
                y++;
                ans+=arr[i];
            }
            flag=0;
        }
        i++;
    }
    //cout<<ans<<" "<<x<<" "<<y<<endl;
    if(flag==0){
        ans+=arr[id1]*(n-x);
        ans+=arr[id2]*(n-y);
    }else{
        ans+=arr[id1]*(n-y);
        ans+=arr[id2]*(n-x);
    }

    cout<<ans<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}