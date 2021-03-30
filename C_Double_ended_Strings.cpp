#include<bits/stdc++.h>
using namespace std;
void solve(){
   string a,b;
   cin>>a>>b;
   int n1=a.size();
   int n2=b.size();
vector<string> s1,s2;


    for(int i=0;i<n1;i++){
        for(int j=i;j<n1;j++){
            string res="";
            for(int k=i;k<=j;k++){
                res+=a[k];
            }
            s1.push_back(res);
        
        }
    }


    for(int i=0;i<n2;i++){
        for(int j=i;j<n2;j++){
            string res="";
            for(int k=i;k<=j;k++){
                res+=b[k];
            }
            s2.push_back(res);
        
        }
    }

int ans=0;

for(auto ss:s1){
    for(auto sss:s2){
        if(ss==sss){
            string str=ss;
            int sz=str.size();
            ans=max(ans,sz);
        }
    }
}

long long val=n1+n2;
cout<<val-(2*ans)<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}