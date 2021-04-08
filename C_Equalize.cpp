#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string a,b;
    cin>>a>>b;

    long long cost=0;

    int i=0,j=1;
    while(j<n){
        if((a[i]!=b[i] && a[i]==b[j]) && (a[j]!=b[j] && a[j]==b[i])){
            char temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            cost++;
        }
        i++;
        j++;
    }

//cout<<a<<endl;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            a[i]=b[i];
            cost++;
        }
    }

    cout<<cost<<endl;
    return 0;
}