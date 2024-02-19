#include<bits/stdc++.h>
using namespace std;
int fac(int n){
    if(n==0) return 1;
    else return n*fac(n-1);
}
int pow2(int n){
    if(n==0) return 1;
    else return 2*pow2(n-1);
}
int power(int a,int b){
    if(b==0) return 1;
    else return a*power(a,b-1);
}
int fib_num(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else return fib_num(n-1)+fib_num(n-2); 
}

// bool ArraySort(int n,int  arr[],int i){
//     if(i==n-1) return true;
//     else return ArraySort(n,arr,i+1) & arr[i]<=arr[i+1];

// }
int main(){
    int n;
    cin>>n;
    cout<<"Factorial is: "<<fac(n)<<endl;
    cout<<"Power of  2 is: "<<pow2(n)<<endl;
    cout<<"Fibonacci is: "<<fib_num(n)<<endl;
    int p,q;
    cin>>p>>q;
    cout<<q<<"th power of "<<p<<" is: "<<power(p,q)<<endl;
    // int n=5;
    // int arr[5]={1,2,3,4};
    // cout<<ArraySort(5,arr,0)<<endl;
    return 0;
}