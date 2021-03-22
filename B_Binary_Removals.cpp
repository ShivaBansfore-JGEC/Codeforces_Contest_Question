#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int one=0,zero=0;
    int n=s.size();
    for(char u:s){
        if(u=='1'){
            one++;
        }else{
            zero++;
        }
    }
        int con1=0,con0=0;
        int i=0;
        string res="";
        while(i<n-1){
            if(s[i]=='1' && s[i+1]=='1'){
                res+='1';
                res+="1";
                i+=2;
                continue;
            }else if(s[i]=='0' && s[i+1]=='0'){
                res+='0';
                res+='0';
                i+=2;
                continue;
            }

            i++;
        }
        i=0;
        while(res[i]=='0'){
            i++;
        }
        while(res[i]=='1'){
            i++;
        }
        if(i>=res.size()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}