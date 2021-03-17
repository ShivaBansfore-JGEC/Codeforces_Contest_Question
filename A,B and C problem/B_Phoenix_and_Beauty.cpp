#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector<ll> a;
void solve(){
    int n,k;
    cin>>n>>k;
    set<int> s;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.insert(a);
    }

    if(s.size()>k){
        cout<<-1<<endl;
        return;
    }
    cout<<n*k<<endl;
    for(int i=0;i<n;i++){
        for(int u:s)
        cout<<u<<" ";

        for(int i=0;i<k-s.size();i++){
            cout<<"1"<<" ";
        }
    }
    cout<<endl;
  
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}