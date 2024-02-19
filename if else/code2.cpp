#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter number a :"<<endl;
    char ch;
    cin>>ch;
    if(ch>=48 && ch<=57) cout<<"Numeric"<<endl;
    else if(ch>=65 && ch<=90) cout<<"Uppercase"<<endl;
    else if(ch>=97 && ch<=122) cout<<"Lowercase"<<endl;
    return 0;
}