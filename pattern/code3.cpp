/*
3 2 1
3 2 1
3 2 1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<n-j+1+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}