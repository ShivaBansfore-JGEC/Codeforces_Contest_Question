#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin>>n>>k;
    vector<int> a;
    set<long long> s;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mx=max(mx,x);
        s.insert(x);
        a.push_back(x);
    }

    sort(a.begin(),a.end());

    int cnt=0;
    int flag=0;
    int v=-1;
    for(int u:a){
        if(cnt!=u){
            v=cnt;
            break;
        }
        cnt++;
    }
    if(k==0){
        cout<<s.size()<<endl;
        return;
    }
    if(v==-1){
        cout<<s.size()+k<<endl;
    }else{
        long long val=ceil((v+mx)*1.0/2*1.0);
        s.insert(val);
        cout<<s.size()<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}