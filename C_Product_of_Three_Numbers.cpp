#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;

    vector<int> fact;

    while(n%2==0){
        fact.push_back(2);
        n=n/2;
    }

    for(int i=3;i*i<=n;i+=2){
        while(n%i==0){
            fact.push_back(i);
            n=n/i;
        }
    }

    if(n>2){
        fact.push_back(n);
    }

    if(fact.size()<3){
        cout<<"NO"<<endl;
    }else if(fact.size()==3){
        set<long long> st;
        for(int u:fact){
            st.insert(u);
        }
        if(st.size()<3){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i:st) cout<<i<<" ";
            cout<<endl;
        }

    }else{
        set<long long> st;
        st.insert(fact[0]);
        int strt=2;
        if(fact[0]!=fact[1]){
            st.insert(fact[1]);
            strt=2;
        }else{
            st.insert(fact[1]*fact[2]);
            strt=3;
        }
        long long ans=1;
        for(int i=strt;i<fact.size();i++){
            ans*=fact[i];
        }
        st.insert(ans);
        if(st.size()<3){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i:st) cout<<i<<" ";
            cout<<endl;
        }

    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}