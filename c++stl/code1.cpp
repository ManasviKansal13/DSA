#include<bits/stdc++.h>
#include<array>
using namespace std;
int main(){
    array<int,5>a;
    for(int i=0;i<a.size();i++){
        cin>>a[i];
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<a.at(4)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.empty()<<endl;
    return 0;

}