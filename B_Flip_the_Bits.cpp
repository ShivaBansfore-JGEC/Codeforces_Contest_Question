#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int one=0,zero=0;
    bool change=false;

    for(char u:a){
        if(u=='1'){
            one++;
        }else{
            zero++;
        }
    }

    for(int i=n-1;i>=0;i--){
        if((a[i]!=b[i] && change==false) || (a[i]==b[i] && change==true)){
            if(zero!=one){
                cout<<"NO"<<endl;
                return;
            }else{
                change=!change;
            }
        }

        if(a[i]=='1'){
            one--;
        }else{
            zero--;
        }

    }

    cout<<"YES"<<endl;


}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
}