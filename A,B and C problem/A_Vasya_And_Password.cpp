#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector<pair<int,string>> v;

void solve(){

    string s;
    cin>>s;
    int upper=0,lower=0,digit=0;

    for(int i=0;i<s.size();i++){
        if(isupper(s[i])) upper++;
        if(islower(s[i])) lower++;
        if(isdigit(s[i])) digit++;
    }

    if(upper>=1 && lower==0 && digit==0)
    {  
        s[0]='a';
        s[1]='1';

    }else if(upper==0 && lower>=1 && digit==0){
        s[0]='1';
        s[1]='A';

    }else if(upper==0 && lower==0 && digit>=1){
        s[0]='a';
        s[1]='A';

    }else if(upper>=1 && lower>=1 && digit==0){
        for(int i=0;i<s.size();i++){
            if(upper>1){
                if(isupper(s[i])){
                    s[i]='1';
                    break;
                }
            }

            if(lower>1){
                if(islower(s[i])){
                    s[i]='1';
                    break;
                }
            }
        }

    }else if(upper>=1 && lower==0 && digit>=1){
        for(int i=0;i<s.size();i++){
            if(upper>1){
                if(isupper(s[i])){
                    s[i]='a';
                    break;
                }
            }

            if(digit>1){
                if(isdigit(s[i])){
                    s[i]='a';
                    break;
                }
            }
        }

    }else if(upper==0 && lower>=1 && digit>=1){
        for(int i=0;i<s.size();i++){
            if(digit>1){
                if(isdigit(s[i])){
                    s[i]='A';
                    break;
                }
            }

            if(lower>1){
                if(islower(s[i])){
                    s[i]='A';
                    break;
                }
            }
        }

    }else if(upper>=1 && lower>=1 && digit>=1){
        cout<<s<<endl;
        return;
    }
    cout<<s<<endl;

}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}