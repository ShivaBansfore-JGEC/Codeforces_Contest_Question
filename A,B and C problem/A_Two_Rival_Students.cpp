#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n,x,a,b;
    cin>>n>>x>>a>>b;
    if(a>b){
        swap(a,b);
    }

    if(x==0){
        cout<<abs(b-a)<<endl;
        return;
    }else{
        if(a-x>=1){
            a-=x;
            cout<<b-a<<endl;
        }else if(b+x<=n){
            cout<<abs((b+x)-a)<<endl;
        }else{
            if(b+x>1){
                int end=n;
                int rem=abs((b+x)-n);
                int start=a;
                if(a-rem>=1){
                    start=a-rem;
                }else{
                    start=1;
                }
                cout<<abs(end-start)<<endl;
            }else if(a-x<1){
                int start=1;
                int rem=x-(a-1);
                int end=n;
                if(b+rem<=n){
                    end=b+rem;
                }else{
                    end=n;
                }
                cout<<abs(end-start)<<endl;
            }
        }
    }

 
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}