#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int GCD(int a, int b){
    int gcd;
    if(a>b) gcd=GCD(a-b,b);
    else if (b>a) gcd=GCD(a,b-a);
    else gcd=a;
    return gcd;
}
int main() {
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0,j=1;i<n,j<n+1;i++,j++){
        int k=(GCD(arr[i],arr[j]));
        swap(arr[i],k);
    } 
    for(int i=0;i<n;i++) cout<<arr[i];
    return 0;
}