#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ac=0;
    for(int i=n-1;i>=0;i--){
        ac=max(ac,a[i]);
        if(ac>0){
            a[i]=1;
            ac--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}