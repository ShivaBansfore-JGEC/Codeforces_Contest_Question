#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int n=s.size();
    int i=0,j=n-1;
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }

    return true;

}

void solve(){
    string s;
    cin>>s;
    int flag=1;

    for(char u:s){
        if(u!='a'){
            flag=0;
            break;
        }
    }

    if(flag==0){
        cout<<"YES"<<endl;
              if(s[0]!='a'){
                cout<<s+'a'<<endl;
            }else if(s[s.size()-1]!='a'){
                cout<<'a'+s<<endl;
            }else

                if(isPalindrome(s+'a')){ 
                    cout<<'a'+s<<endl;
                }else{
                    cout<<s+'a'<<endl;
                }
            }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}