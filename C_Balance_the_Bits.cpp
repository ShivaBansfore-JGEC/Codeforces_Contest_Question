#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int one=0;
    for(char u:s){
        if(u=='1'){
            one++;
        }
    }

    if(one%2==1 || s[0]=='0' || s[n-1]=='0'){
        cout<<"NO"<<endl;
        return;
    }

    bool flip=false;
    string a,b;
    int k=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            a.push_back((2*k < one ? '(' : ')'));
            b.push_back(a.back());
            k++;
        }else{
            a.push_back((flip ? '(' : ')'));
            b.push_back((flip ? ')' : '('));
            flip=!flip;
        }
    }

cout<<"YES"<<endl;
cout<<a<<endl;
cout<<b<<endl;
 
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}