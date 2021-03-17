#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int fre[26];
void solve(){
    int n;
    cin>>n;
    set<char> s;
    for(int i=0;i<=26;i++) fre[i]=0;
    for(int i=0;i<n;i++){
        string s1;
        cin>>s1;
        for(int j=0;j<s1.size();j++){
            s.insert(s1[j]);
            fre[s1[j]-'a']++;
        }
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(fre[i]%n!=0){
            c++;
        }
    }

    if(c){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}