#include<stdio.h>
#include<stdlib.h>
struct tnode{
    int data;
    struct tnode *left,*right;
};
struct tnode* newtnode(int data){
    struct tnode* temp=(struct tnode*)malloc(sizeof(struct tnode));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
void treetrave(struct tnode* root){
    if(root==NULL) return;
    printf("data:%d\n",root->data);
    treetrave(root->left);
    treetrave(root->right);
}
int main(){
    struct tnode* root=newtnode(10);
    root->left=newtnode(20);
    root->right=newtnode(30);
    root->left->right=newtnode(40);
    root->left->left=newtnode(50);
    root->right->right=newtnode(60);
    root->right->left=newtnode(70);
    treetrave(root);
}