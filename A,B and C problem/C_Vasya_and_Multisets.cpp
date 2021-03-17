#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int fre[102];
void solve(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        fre[arr[i]]++;
    } 

    int cnt=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(fre[arr[i]]==1){
            cnt++;
        }

    }

    for(int i=1;i<=100;i++){
        sum+=fre[i];
    }
    cout<<sum<<endl;
    cout<<endl;
    if(sum%2!=0){
        cout<<"NO"<<endl;
    }else{
        int extra=0;
        cout<<"YES"<<endl;
        if(cnt%2==0){
            int c=0;
            int i=0;
            while(i<n){
                while(c<cnt/2){
                    cout<<"A";
                    if(fre[arr[i]]==1){
                        c++;
                    }
                    i++;
                }
                cout<<"B";
                i++;
            }
        }else{
            int c=0;
            int i=0;
            while(i<n){
                while(c<cnt/2){
                    cout<<"A";
                    if(fre[arr[i]]==1){
                        c++;
                    }
                    i++;
                }
                if(fre[arr[i]]>2){
                    if(extra==0){
                        cout<<'A';
                        extra=1;
                        i++;
                        continue;
                    }
                }

                cout<<"B";
                i++;
            }

        }
    }
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}