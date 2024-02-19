//power
//odd even
//nCr
//factorial
//print count
//prime
//ap 3n+7
#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
        int ans=1;
        for(int i=0;i<b;i++) ans=ans*a;
        return ans;
    }
bool IsOdd(int a){
    if(a%2==0) return 0;
    else return 1;
}
int factorial(int  a){
    int fact=1;
    for(int i=1;i<=a;i++) fact=fact*i;
    return fact;
}
int nCr(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
void Count(int a){
    for(int i=1;i<=a;i++) cout<<i<<" ";
}
bool IsPrime(int  a){
    for(int i=2;i<a;i++){
        if(a%i==0) return 0;
        break;
    }
}
void AP(int n){
    for(int i=1;i<=n;i++) cout<< 3*i+7<<" ";
}
void fibonacci(int n){
    int a=0,b=1;
    cout<<a<<" "<<b;
    for(int i=1;i<=n;i++){
        int sum=a+b;
        cout<<" "<<sum;
        a=b;
        b=sum;
    }
}
int main(){
    // int a,b;
    // cin>>a>>b;
    cout<<power(2,5)<<endl;
    cout<<IsOdd(5)<<endl;
    cout<<factorial(5)<<endl;
    cout<<nCr(8,1)<<endl;
    Count(10);
    cout<<endl<<IsPrime(1187)<<endl;
    AP(5);
    cout<<endl;
    fibonacci(5);
    return 0;

}