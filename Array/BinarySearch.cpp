//Binary Search
//first occurance and last occurance
#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int a[],int n,int key){
    int i=0,j=n-1;
    int mid=i+(j-i)/2;
    while(i<=j){
        if(a[mid]==key) return mid;
        if(a[mid]>key) j=mid-1;
        else i=mid+1;
        mid=i+(j-i)/2;
    }
    return -1;
}
int firstPosition(int arr[],int n,int k){
    int s=0,e=n-1,ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>k) e=mid-1;
        else s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastPosition(int arr[],int n,int k){
    int s=0,e=n-1,ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>k) e=mid-1;
        else s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int totalOcc(int a[],int n,int k){
    return (lastPosition(a,n,k)-firstPosition(a,n,k))+1;
}
int pivot(int a[],int n){
    int s=0,e=n-1,ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){ 
        if(a[mid]>=a[0]){
            s=mid+1;
        }
        else s=mid;
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[5]={12,23,34,56,78};
    cout<<"index of 34 is "<<BinarySearch(arr,5,34)<<endl;
    int a[7]={10,20,20,20,30,40,50};
    int b[8]={10,20,20,20,30,40,40,50};
    cout<<firstPosition(a,7,20)<<endl;
    cout<<lastPosition(a,7,20)<<endl;
    cout<<totalOcc(a,7,30 )<<endl;
    int p[8]={5,6,7,8,1,2,3,4};
    cout<<pivot(p,8);
    return 0;

}
