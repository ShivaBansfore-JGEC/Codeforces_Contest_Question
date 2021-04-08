#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    if(m<n-1){
        cout<<-1<<endl;
    }else if(m>(2*(n+1))){
        cout<<-1<<endl;
    }else if(m==(n-1)){
        string ans="";
        ans+='0';
        n--;
        while(n>0){
            ans+='1';
            ans+='0';
            n--;
        }
        cout<<ans<<endl;
    }else{
        
        string ans="";
        while(n>0 || m>0){
                if(m>n){
                    if(n>0){
                        ans+="110";
                        m-=2;
                        n-=1;
                    }else if(m>1){
                        ans+="11";
                        m-=2;
                    }else if(m==1){
                        ans+="1";
                        m--;
                    }
                }else{
                    if(n>0){
                        ans+="10";
                        m--;
                        n--;
                    }else if(m>1){
                        ans+="11";
                        m--;
                    }else if(m==1){
                        ans+="1";
                        m--;
                    }
                }
     }
     cout<<ans<<endl;
    }

    return 0;
}