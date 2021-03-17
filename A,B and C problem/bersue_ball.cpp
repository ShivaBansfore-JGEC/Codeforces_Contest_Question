#include<bits/stdc++.h>
using namespace std;
vector<int> boys,girls;




void solve(){
    int n;
    cin>>n;
    boys.resize(n,0);
    
    for(int i=0;i<n;i++){
        cin>>boys[i];
    }

    //girsl 

    int m;
    cin>>m;

    girls.resize(m,0);
    
    for(int i=0;i<m;i++){
        cin>>girls[i];
    }

    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end());

    int i=0;
    int j=0;
    int count =0;
    while(i<n && j<m){
        int diff=abs(boys[i]-girls[j]);
        if(diff<=1){
            count++;
            i++;
            j++;
            continue;
        }
        if(boys[i]<girls[j]) i++;
        else j++;

    }
    cout<<count<<endl;

}





int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    solve();


    return 0;
}