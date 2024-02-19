#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int m){
        data=m;
        left=right=NULL;
    }
};
void Preorder(Node){
    if(root==NULL) return;
    cout<<(Node->data);
    Preorder(Node->left);
    Preorder(Node->right);
}
int main(){
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    return 0;
}