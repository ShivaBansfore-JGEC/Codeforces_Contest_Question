#include<bits/stdc++.h>
using namespace std;

void reverseStr(string& str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
}

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0){
        cout<<"YES"<<endl;
        return;
    }
        if((k+1)<=ceil(n*1.0/2*1.0)){
            string res="";
            for(int i=0;i<n/2;i++){
                res+=s[i];
            }
            string ans=res;
            if(n%2!=0){
                ans+=s[n/2];
            }
            reverseStr(res);
            ans+=res;
            if(ans==s){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }


        }else{
            cout<<"NO"<<endl;
        }

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}