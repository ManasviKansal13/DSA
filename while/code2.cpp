#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i=2,sum=0;
    while(i<=a){
        sum=sum+i;
        i=i+2;
    }
    cout<<sum;
    return 0;
    
}