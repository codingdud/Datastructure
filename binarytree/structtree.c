#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node* newnode(int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->right=temp->left=NULL;
    return temp;
}

int main(){
    struct node* root=newnode(10);
    root->left=newnode(20);
    root->right=newnode(30);
    printf("%d",root->left->data);
}
