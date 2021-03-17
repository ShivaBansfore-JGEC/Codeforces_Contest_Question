#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int a[1000002];
int b[1000002];

void solve(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++) cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    reverse(a+1,a+n+1);
    reverse(b+1,b+n+1);

    ll i=1,j=1,player=0,move=0,asum=0,bsum=0;

    while(move<2*n){
        move++;
        if(!player){
            if(a[i]>=b[j]){
                asum+=a[i];
                i++;
            }else{
                j++;
            }
        }else{

                if(b[j]>=a[i]){
                    bsum+=b[j];
                    j++;
                }else{
                    i++;
                }
        }
        player^=1;
    }

    cout<<asum-bsum<<endl;


}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}