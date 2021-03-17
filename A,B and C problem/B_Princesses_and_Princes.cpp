#include<bits/stdc++.h>
using namespace std;

int visited[100001];
int married[100001];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) married[i]=0,visited[i]=0;
    int l=1;
    for(int i=0;i<n;i++){
        int flag=0;
        int k;
        cin>>k;
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            if(flag==0){
                if(visited[x]==0){
                    married[l]=1;
                    visited[x]=1;
                    flag=1;
                }
            }
        }
        l++;
    }
    //for(int i=1;i<=n;i++) cout<<visited[i]<<" ";
    //cout<<endl;
    //for(int i=1;i<=n;i++) cout<<married[i]<<" ";
    //cout<<endl;
    //cout<<endl;
    int prince=-1,princes=-1;
    for(int i=1;i<=n;i++){
        if(married[i]==0){
            princes=i;
            break;
        }
    }
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            prince=i;
            break;
        }
    }

    if(princes==-1 or prince==-1){
        cout<<"OPTIMAL"<<endl;
    }else
    {
        cout<<"IMPROVE"<<endl;
        cout<<princes<<" "<<prince<<endl;
    }
    
  
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}