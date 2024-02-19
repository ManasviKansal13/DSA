#include<bits/stdc++.h>
using namespace std;
int rec(int n){
    if(n<1) return 0;
    else {
        cout<<n;
        return rec(n-1);
    }
}
int main(){
    int a;
    cin>>a;
    cout<<rec(a);
    return 0;
}