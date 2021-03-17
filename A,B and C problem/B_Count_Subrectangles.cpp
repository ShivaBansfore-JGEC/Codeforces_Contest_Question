#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int count(vector<int> a,int l){
    int ans=0;
    int sum=0;
    for(int i=0;i<a.size();++i){
        if(a[i]==1){
            sum++;
        }else{
            sum=0;
        }
        if(sum>=l) ans++;
    }
    return ans;
}

void solve(){
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> a;
    vector<int> b;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        b.push_back(temp);
    }

    ll res=0;
    for(int i=1;i<=n;i++){
        if(k%i==0 and k/i<=m){
            res+=(count(a,i)*count(b,k/i));
        }
        
    }
    cout<<res<<endl;

}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();

    return 0;
}