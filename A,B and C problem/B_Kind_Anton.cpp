#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    int pstv[n];
    int neg[n];
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pstv[i]=1;
        }else pstv[i]=0;

        if(a[i]<0){
            neg[i]=1;
        }else neg[i]=0;
    }

    for(int i=1;i<n;i++) pstv[i]+=pstv[i-1];
    for(int i=1;i<n;i++) neg[i]+=neg[i-1];
    int f=0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i])
        continue;
        else{
            if(b[i]<0){
                if(neg[i-1]<1){
                    f=1;
                    break;
                }
            }else{
                if(pstv[i-1]<1){
                    f=1;
                    break;
                }

            }
        }
    }
    if(f==1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}