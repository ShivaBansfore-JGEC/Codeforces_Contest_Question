#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int fre[26];
void solve(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    if(n==1){
        cout<<1<<" "<<1<<endl;
        cout<<0<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<0<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<-arr[0]<<endl;

    }else{
        cout<<1<<" "<<1<<endl;
        cout<<-arr[0]<<endl;
        arr[0]=0;

        cout<<2<<" "<<n<<endl;
        for(int i=1;i<n;i++){
            if(i>1){
                cout<<" ";
            }

            ll len=n-1LL;
            ll val=(arr[i]%n)*len;
            arr[i]+=val;
            cout<<val;
        }
        cout<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<0<<" ";
        for(int i=1;i<n;i++){
            cout<<-arr[i]<<" ";
        }
        cout<<endl;

    }

}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}