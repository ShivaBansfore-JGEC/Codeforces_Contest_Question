#include<bits/stdc++.h>
using namespace std;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int mpp[26]={0};

    for(char u:S){
        mpp[u-'A']++;
    }
    string str="BALLOON";
    int mn=INT_MAX;
    for(char u:str){
        if(mpp[u-'A']>0)
            mn=min(mn,mpp[u-'A']);
    }

    while(mn>=1){
        if(mpp['O'-'A']>=2*mn && mpp['L'-'A']>=2*mn){
            break;
        }
        mn--;
    }

    return mn;
}


int main(){
    string s;
    cin>>s;
    cout<<solution(s)<<endl;
    return 0;
}