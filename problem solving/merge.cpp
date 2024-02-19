//merge two array and store in array 1...back track kr lenge 3no array
#include<bits/stdc++.h>
using namespace std;
void merge(int nums1[], int m, int nums2[], int n,int nums3[]){
    int i=0,j=0,k=0;
    while(i<m&&j<n){
        if(nums1[i]<nums2[j]){
            nums3[k]=nums1[i];
            i++;
            k++;
        }
        else{
            nums3[k]=nums2[j];
            j++;
            k++;
        }
    }
    while(i<m){
        nums3[k]=nums1[i];
        i++;
        k++;
    }
    while(j<n){
        nums3[k]=nums2[j];
        j++;
        k++;
    }
    for(int a=0;a<m+n;a++)
        cout<<nums3[a]<<" ";
}
int main(){
    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3,arr3);
    return 0;
}