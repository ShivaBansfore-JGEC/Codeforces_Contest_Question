#include<bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    cin>>s;
    int n=s.size();
    bool flag=0;
    string ans="";
    for(int i=0;i<n;i++){
        int cnt=1,j=i;
        while(j<n-1){
            if(s[i]!=s[j+1]){
                break;
            }
            cnt++;
            j++;
        }
        i=j;
        if(cnt>=2){
            if(flag==1){
                ans+=s[i];
                flag=0;
            }else{
                ans+=s[i];
                ans+=s[i];
                flag=1;
            }
        }else{
            ans+=s[i];
            flag=0;
        }
    }


    cout<<ans<<endl;
    
    
}

int main(){
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}