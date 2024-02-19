#include<bits/stdc++.h>
using namespace std;
void num(int n,string arr[]){
    if(n==0) return ;
    else{
        int digit=n%10;
        n=n/10;
        num(n,arr);
        cout<<arr[digit]<<" ";
    }
}
bool IsSorted(int arr[],int n){
    if(n==0||n==1) return true;
    else if(arr[0]>arr[1]) return false;
    else{
        return IsSorted(arr+1,n-1);
    }
}
int main(){
    // string  arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    // num(n,arr);
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(IsSorted(a,n)) cout<<"Array is sorted"<<endl;
    else cout<<"Array is not sorted"<<endl;
    return 0;
}