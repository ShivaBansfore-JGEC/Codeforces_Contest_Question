#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    set<char> st;
    for(char u:s1){
        st.insert(u);
    }
    map<char,int> mp;
    for(char u:s2){
        mp[u]++;
    }

    string ans="";

    for(char s:st){
        if(mp[s]<=0){
            ans+=s;
        }
    }

    cout<<ans<<endl;

}