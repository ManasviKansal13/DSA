#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>m;
    m.push_back(4);
    cout<<m.size()<<" "<<m.capacity()<<endl;
    m.push_back(45);
    cout<<m.size()<<" "<<m.capacity()<<endl;
    m.push_back(445);
    cout<<m.size()<<" "<<m.capacity()<<endl;
    m.push_back(546);
    cout<<m.size()<<" "<<m.capacity()<<endl;
    m.push_back(789);
    cout<<m.size()<<" "<<m.capacity()<<endl;
    for(int i:m){
        cout<<i<<" ";
    }cout<<endl;
    m.pop_back();
    for(int i:m){
        cout<<i<<" ";
    }cout<<endl;
    cout<<m.front()<<endl;
    cout<<m.back()<<endl;
    cout<<binary_search(m.begin(),m.end(),445);
    cout<< lower_bound(m.begin(),m.end(),445)-m.begin();
    return 0;
}