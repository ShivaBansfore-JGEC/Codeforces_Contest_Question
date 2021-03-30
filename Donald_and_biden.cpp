#include<bits/stdc++.h>
using namespace std;


int main(){
    int x,y;
    cin>>x>>y;

    if(x%2==0 && x>2){
        cout<<"Donald Trump"<<endl;
    }else if(y%2==0 && y>2){
        cout<<"Joe Biden"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}