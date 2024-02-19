#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i=2;
    while(i<a){
        if(a%i==0) cout<<"not prime"<<i<<endl;
        else cout<<"prime"<<i<<endl;
        i++;
    }
    
    return 0;
}