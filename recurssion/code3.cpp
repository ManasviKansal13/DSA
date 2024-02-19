#include<bits/stdc++.h>
using namespace std;
bool LinearSearch(int arr[],int n,int k){
    if(n==0) return false;
    else if(arr[0]==k) return true;
    else return LinearSearch(arr+1,n-1,k);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int k=7;
    cout<<LinearSearch(arr,n,k)<<endl;
    return 0;
}