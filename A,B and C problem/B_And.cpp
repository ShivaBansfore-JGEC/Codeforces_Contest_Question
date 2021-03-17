#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    unordered_map<ll,ll> m1,m2;
    int n,x;
    cin>>n>>x;
    int arr[n],b[n];
    int mx=INT_MIN;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        m1[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(m1[arr[i]]>1){
            cout<<0<<endl;
            return ;
        }
    }
    
    for(int i=0;i<n;i++){
        ll z=arr[i]&x;
        if(m1[z]){
            if(z!=arr[i]){
                cout<<1<<endl;
                return;
            }
        }
        m2[z]+=1;
        b[i]=z;
    }

    for(int i=0;i<n;i++){
        if(m2[b[i]]>1){
            cout<<2<<endl;
            return;
        }

    }

    cout<<-1<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}