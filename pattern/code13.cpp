/*
1234554321
1234**4321
123****321
12******21
1********1

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        for(int k=0;k<i-1;k++){
            cout<<"*";
        }
        for(int m=i-1;m>0;m--){
            cout<<"*";
        }
        for(int l=n-i+1;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}