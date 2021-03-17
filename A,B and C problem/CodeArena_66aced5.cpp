#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    string s;
    cin>>s;

    int n=s.size();
    vector<int> a(26);
    for(int i=0;i<n;i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a[i]>0){
            int m=a[i];
            for(int j=0;j<m;j++){
                cout<<(char)(i+'a');
            }
        }

    }

cout<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}