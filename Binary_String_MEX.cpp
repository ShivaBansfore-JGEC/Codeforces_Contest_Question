#include<bits/stdc++.h>
using namespace std;


long long binaryToDecimal(string n)
{
    string num = n;
    long long dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    long long base = 1;
 
    long long len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}


void solve(){
    string s;
    cin>>s;
    int cnt_zero=0,cnt_one=0;

    int cnt=0,flag=0;
    string c="";
    for(char u:s){
        if(u=='1'){
            cnt_one++;
        }else{
            cnt_zero++;
        }

        if(cnt<3){
            if(flag==0){
                if(u=='1'){
                    c+="1";
                    flag=1;
                    cnt++;
                }
            }if(flag==1){
                if(u=='0'){
                    c+='0';
                    cnt++;
                    flag=0;
                }
            }
        }
    }

    int n=s.size();
    int zero_rev[n],one[n],zero[n];

    for(int i=0;i<n;i++){
        zero_rev[i]=0;
        zero[i]=0;
        one[i]=0;
    }

    if(s[0]=='1'){
        one[0]=1;

    }else{
        zero[0]=1;
    }
    if(s[n-1]=='0'){
        zero_rev[n-1]=1;
    }

    for(int i=1;i<n;i++){
        if(s[i]=='1'){
            one[i]=one[i-1]+1;
            zero[i]=zero[i-1];
        }else{
            one[i]=one[i-1];
            zero[i]=zero[i-1]+1;
        }
    }

    for(int i=n-2;i>=0;i--){
        if(s[i]=='0'){
            zero_rev[i]=zero_rev[i+1]+1;
        }else{
            zero_rev[i]=zero_rev[i+1];
        }
    }


    if(cnt_one==n || cnt_zero==n){
        if(cnt_one==n){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
        }
        return;
    }

    long long val=1e18;
    string res=s;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            string ans="";
            for(int k=0;k<one[i];k++){
                ans+='1';
            }
            
            for(int j=0;j<zero_rev[i]+1;j++){
                ans+='0';
            }
            long long v=binaryToDecimal(ans);
            if(v<val){
                val=v;
                res=ans;
            }

        }
    }

    int v=binaryToDecimal(res);
    int v2=binaryToDecimal("101");
    if(c!="101"){
        if(v2<v){
            cout<<"101"<<endl;
            return;
        }
    }
    cout<<res<<endl;

}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}