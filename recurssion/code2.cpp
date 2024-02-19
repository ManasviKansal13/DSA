//sum of the array
#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
    if(n==0) return 0;
    else if(n==1) return arr[0];
    else{
        return sum(arr+1,n-1)+arr[0];
    }
}
int main(){
    int arr[3]={10,20,30};
    cout<<sum(arr,3)<<endl;
    return 0;
}