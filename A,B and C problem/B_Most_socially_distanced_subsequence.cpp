#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int c=0;
    vector<int> ans;
    ans.push_back(a[0]);
    for(int i=1;i<n;i++){

        if(a[i]>ans[c]){
            while(a[i]>a[i-1] && i<n){
                i++;
            }
            i--;
            ans.push_back(a[i]);
        }else{
            while(a[i]<a[i-1] && i<n){
                i++;
            }
            i--;
            ans.push_back(a[i]);
        }
        c++;
    }
    cout<<ans.size()<<endl;
    for(int u:ans) cout<<u<<" ";
    cout<<endl;
    
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}