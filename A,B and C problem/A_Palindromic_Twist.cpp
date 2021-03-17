#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int j=n-1;
    int flag=1;
    while(i<j){
        if(s[i]=='a'){
            if(s[i]==s[j]||(s[i]-'a')+1==s[j]-'a'-1){
                i++;
                j--;
                continue;
            }else{
                flag=0;
                break;
            }
        }

        if(s[i]=='z'){
            if(s[i]==s[j]||(s[i]-'a')-1==s[j]-'a'+1){
                i++;
                j--;
                continue;
            }else{
                flag=0;
                break;
            }
        }
        //cout<<s[i]-'a'+1<<":"<<s[i]<<" "<<s[j]<<": "<<s[j]-'a'<<endl;
        if(s[j]==s[i] || (s[i]-'a')-1==s[j]-'a'-1 ||(s[i]-'a')-1==s[j]-'a'+1|| (s[i]-'a')+1==s[j]-'a'-1 || (s[i]-'a')+1==s[j]-'a'+1){
            i++;
            j--;
            continue;
        }else{
            flag=0;
            break;
        }

        i++;
        j--;
    }

    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}