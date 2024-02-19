#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]) min=j;
        }
        swap(arr[min],arr[i]);
    }
}
void BubbleSort(int arr[],int n){
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
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int start=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>start) arr[j+1]=arr[j];
            else break;
        }
        arr[j+1]=start;
    }
}
int main(){
    int n=5;
    int arr[5]={10,34,32,23,78};
    //SelectionSort(arr,5);
    
    //BubbleSort(arr,5);
    InsertionSort(arr,5);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}