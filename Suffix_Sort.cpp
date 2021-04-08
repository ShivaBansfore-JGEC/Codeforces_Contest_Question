#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    long long arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(is_sorted(arr,arr+n)){
        cout<<"YES"<<endl;
        cout<<0<<endl;
        return;
    }

    if(n==1){
        cout<<"YES"<<endl;
        cout<<0<<endl;
    }else if(n==2){
        cout<<"YES"<<endl;
        cout<<1<<endl;
    }else{
        int f=0;
        vector<long long> pre,suf;
        for(int i=n-1;i>0;i--){
            if(arr[i]>=arr[i-1]){
                f=i;
            }else{
                f=i;
                break;
            }
        }

        for(int i=f;i<n;i++){
            pre.push_back(arr[i]);
        }

        for(int i=0;i<f;i++){
            pre.push_back(arr[i]);
        }

        if(is_sorted(pre.begin(),pre.end())){
            cout<<"YES"<<endl;
            cout<<1<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}