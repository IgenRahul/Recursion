#include<bits/stdc++.h>
using namespace std;
//suppose a tree is given as head
class tree{
    public:
    int data;
    tree * left;
    tree * right;
    tree(){
        data = 0;
        left = NULL;
        right = NULL;
    }
    tree(int a){
        data = a;
        left = NULL;
        right = NULL;
    }
}
int solve(tree * head){
    if(head == NULL) return 0;
    return 1+ max(solve(head->left),solve(head->right));
}
int main (){
    tree head(2);
    cout<<solve(head);
    return 0;
}