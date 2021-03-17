#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    if(n==1){
        if(s[0]=='1'){
            cout<<1<<endl;
            return;
        }else{
            cout<<0<<endl;
            return;
        }
    }
    vector<int> consicutive;
    int non_cons=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }else{
            if(cnt>1){
                consicutive.push_back(cnt);
            }
            cnt=0;
        }
    }
    if(cnt>1){
        consicutive.push_back(cnt);
    }

    //count non conswcutive

    for(int i=0;i<n;i++){
        if(i==0){
            if(s[i]=='1' && s[i+1]=='0') non_cons++;
        }else if(i==n-1){
            if(s[i]=='1' && s[i-1]=='0') non_cons++;
        }else{
            if(s[i]=='1' && s[i-1]=='0' && s[i+1]=='0') non_cons++;
        }
    }

    sort(consicutive.begin(),consicutive.end());
    reverse(consicutive.begin(),consicutive.end());
    int size=consicutive.size();
    int alice=0;
    if(size>0){
        for(int i=0;i<size;i++){
            if(i%2==0){
                alice+=consicutive[i];
            }
        }
    }
    if(non_cons>0){
        if(size%2!=0){
            alice+=non_cons/2;
        }else{
            if(non_cons%2==0){
                alice+=non_cons/2;
            }else{
                alice+=(non_cons/2)+1;
            }
    
        }
    }
    cout<<alice<<endl;
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}