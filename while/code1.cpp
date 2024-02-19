#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int i=1,sum=0;
    cin>>a;
    while( i<=a){
        sum=sum+i;
        i++;
    }
    cout<<sum;
    return 0;
}