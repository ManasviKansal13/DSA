#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int  arr[],int n){
    bool flag=false;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }            
        }
        if(flag==false) break;
    }
}
int main(){
    int n=5;
    int arr[5]= {4, 1, 3, 9, 7};
    bubble_sort(arr,5);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}