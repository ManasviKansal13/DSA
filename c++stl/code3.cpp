#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>q;
    q.push_back(23);
    q.push_back(46);
    q.push_front(12);
    q.push_front(20);
    for(int i:q){
        cout<<i<<" ";
    }cout<<endl;
    q.pop_front();
    q.pop_front();
    for(int i:q){
        cout<<i<<" ";
    }cout<<endl;
    cout<<q.at(1)<<endl;
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.erase(q.begin(),q.begin()+1);
    for(int i:q){
        cout<<i<<" ";
    }cout<<endl;
    return 0;

}