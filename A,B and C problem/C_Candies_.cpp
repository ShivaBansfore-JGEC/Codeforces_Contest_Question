#include<bits/stdc++.h>
#define ll long long 
using namespace std;

struct seg{
    ll val,count;
};

ll a[100001];
seg tree[400001];

seg combine(seg left_tree,seg right_tree){
    seg res;
    res.val=(left_tree.val+right_tree.val)%10;
    res.count=left_tree.count+right_tree.count+(left_tree.val+right_tree.val)/10;
    return res;
}

void buildTree(ll node,ll start,ll end){
        if(start==end){
            tree[node].val=a[start]%10;
            tree[node].count=a[start]/10;
            return;
        }

        ll mid=(start+end)/2;
        buildTree(2*node,start,mid);
        buildTree(2*node+1,mid+1,end);
        tree[node]=combine(tree[2*node],tree[2*node+1]);
        return;
        
}

seg query(ll node,ll start,ll end,ll l,ll r){

    if(start>=l and end<=r){
        return tree[node];
    }

    ll mid=(start+end)/2;

    if(r<=mid){
        return query(2*node,start,mid,l,r);
    }else if(l>mid){
        return query(2*node+1,mid+1,end,l,r);
    }

    return combine(query(2*node,start,mid,l,r),query(2*node+1,mid+1,end,l,r));

}

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    buildTree(1,0,n-1);

    int m;
    cin>>m;
    ll l,r;
    for(int i=0;i<m;i++){
        cin>>l>>r;
        l--,r--;
        seg res=query(1,0,n-1,l,r);
        cout<<res.count<<endl;
    }
    
 
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}