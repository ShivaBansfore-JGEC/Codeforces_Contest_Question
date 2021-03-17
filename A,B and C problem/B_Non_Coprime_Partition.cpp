#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void solve(){
    int n;
    cin>>n;

    if(n<=2){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
        if(n%2!=0){

            cout<<(n)/2<<" ";
            for(int i=1;i<=n;i++){
                if(i%2==0){
                    cout<<i<<" ";
                }
            }
            cout<<endl;
            cout<<(n+1)/2<<" ";
            for(int i=1;i<=n;i++){
                if(i%2!=0){
                    cout<<i<<" ";
                }
            }

        }else{
            cout<<(n)/2<<" ";
            for(int i=1;i<=n;i++){
                if(i%2==0){
                    cout<<i<<" ";
                }
            }
            cout<<endl;
            cout<<(n)/2<<" ";
            for(int i=1;i<=n;i++){
                if(i%2!=0){
                    cout<<i<<" ";
                }
            }
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