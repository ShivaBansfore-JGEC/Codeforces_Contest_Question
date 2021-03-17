#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){

    int n;
    cin>>n;
    int arr[n];
    ll tot=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        tot+=arr[i];

    }
    ll alice=arr[0];
    ll alice1=arr[0];

    tot/=2;
    if(alice>tot){
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }else{
        
        vector<int> a;
        a.push_back(1);
        for(int i=1;i<n;i++){
            if(alice>tot) break;
            if(alice1>=(2*arr[i])){
                alice+=arr[i];
                a.push_back(i+1);
            }
        }
        if(alice>tot){
            cout<<a.size()<<endl;
            for(int u:a){
                cout<<u<<" ";
            }
            cout<<endl;
        }else{
            cout<<0<<endl;
        }
    }


 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}