#include<bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    cin>>s;
    int i=0;
    int j=s.size()-1;
    int left_id=-1;
    int right_id=-1;
    while(i<=j){
        if(s[i]=='1'){
            if(left_id==-1) left_id=i;
        }
        if(s[j]=='1'){
            if(right_id==-1){
                right_id=j;
            }
        }
        i++;
        j--;
    }
    if(left_id==-1 || right_id==-1){
        cout<<0<<endl;
    }else{
        int cnt=0;
        for(int i=left_id+1;i<right_id;i++){
            if(s[i]=='0') cnt++;
        }
        cout<<cnt<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}