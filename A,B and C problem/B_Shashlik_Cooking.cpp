#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 

void solve(){
 
    int n,k;
    cin>>n>>k;
    int ans=INT_MAX;
    int id=-1;
    for(int i=1;i<=k+1;i++){
        int c=1;
        bool flag=1;
        for(int j=i+k;j<n;j=j+(2*k+1)){
            if(j+k+1>n){
                flag=false;
                break;
            }
            c++;
        }

        if(c<ans and flag==true){
            ans=min(ans,c);
            id=i;
        }
    }

    cout<<ans<<endl;
    cout<<id<<" ";
    id=id+2*k+1;
    while(id<=n){
        cout<<id<<" ";
        id=id+(2*k)+1;
    }
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}