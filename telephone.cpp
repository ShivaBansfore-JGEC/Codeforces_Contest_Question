#include <iostream>
using namespace std;

string codes[] = {"","", "ABC", "DEF", "GHI", "JKL", "MNO", "PQR", "STU", "VWX"};

void printKPC(string ques, string asf){
    // write your code here
    if(ques.size()==0){
        cout<<asf<<endl;
        return;
    }
    
    char ch=ques[0];
    string ros=ques.substr(1,ques.size()-1);
    string word=codes[ch-'0'];
    for(int i=0;i<word.size();i++){
        printKPC(ros,asf+word[i]);
    }
    
}

int main(){
    string str;
    cin >> str;
    printKPC(str, "");
}