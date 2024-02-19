#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix)
{
    int  n=matrix.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
            swap(matrix[i][j],matrix[j][i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            reverse(matrix[j].begin(),matrix[j].end());
    }
    
}
int main(){
    vector<vector<int>> matrix;
    matrix[3][3]={1,2,3,
                4,5,6,
                7,8,9};
    rotateMatrix(matrix);
    return 0;
}