#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

void add(struct node* head1){
    if(head==NULL){
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp->data);
        head1->link=temp;
        temp->link=NULL;  
    }
    else{
        while(head1!=NULL){
            head1=head1->link;
        }
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        head=temp;
        scanf("%d",&temp->data);
        temp->link=NULL;
    }

}

int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head=NULL;
    
    add(head);
    
}