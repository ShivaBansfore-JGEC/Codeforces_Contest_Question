#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
 
void solve(){
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=s[i]-'0';
        int pos=i+1;
        bool ok=true;
        int sum2=0;
        while(pos<n){
            sum2=s[pos++]-'0';
            while(pos<n && sum2+s[pos]-'0'<=sum){
                sum2+=s[pos]-'0';
                ++pos;
            }
            if(sum2!=sum) ok=false;
        }
        if(sum2!=sum) ok=false;
        if(ok){
            cout<<"YES"<<endl;
            return;
        }

    }
    cout<<"NO"<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}