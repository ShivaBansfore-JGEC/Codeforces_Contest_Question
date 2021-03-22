#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(is_sorted(a.begin(),a.end())){
        cout<<0<<endl;
    }else{
        
    }


}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}