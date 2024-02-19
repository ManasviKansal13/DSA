#include<bits/stdc++.h>
using namespace std;
int main(){
    // priority_queue<int>max;
    // priority_queue<int,vector<int>,greater<int>>min;
    // min.push(7);
    // min.push(45);
    // min.push(2);
    // min.push(35);
    // min.push(45);
    // min.push(23);
    // int n=min.size();
    // for(int i=0;i<n;i++){
    //     cout<<min.top()<<" ";
    //     min.pop();
    // }cout<<endl;
    // max.push(7);
    // max.push(45);
    // max.push(2);
    // max.push(35);
    // max.push(45);
    // max.push(23);
    // int m=max.size();
    // for(int i=0;i<m;i++){
    //     cout<<max.top()<<" ";
    //     max.pop();
    // }cout<<endl;
    map <int,string> m;
    m[23]="manasvi";
    m[1]="hii";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<" ";
    }
}