#include<bits/stdc++.h>
#define ll long long 
using namespace std;



void solve(){
    string p,h;
    cin>>p>>h;

    int n=p.size();
    int m=h.size();
    map<char,int> mp1;
    if(m<n){
        cout<<"NO"<<endl;
    }else{
        for(int i=0;i<n;i++){
            mp1[p[i]]++;
        }

        for(int i=0;i<=m-n;i++){
            map<char,int> mp2;
            int f=1;
            for(int j=i;j<i+n;j++){
                mp2[h[j]]++;
            }
            for(int i=0;i<n;i++){
                if(mp1[p[i]]!=mp2[p[i]]){
                    f=0;
                    break;
                }
            }
            if(f==1){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
    }

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();

   string a="asdb";
    return 0;
}