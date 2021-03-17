#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector<ll> a;
void solve(){
    int n;
    cin>>n;
    if(n%4!=0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        int even_sum=0;
        int c=2;
        for(int i=0;i<n/2;i++){
            even_sum+=c;
            cout<<c<<" ";
            c+=2;
        }
        int odd_sum=0;
        int od=1;
        for(int i=0;i<n/2-1;i++){
            odd_sum+=od;
            cout<<od<<" ";
            od+=2;
        }
        cout<<even_sum-odd_sum<<endl;

    }
  
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}