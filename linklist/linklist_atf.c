#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* addf(struct node* head,int data){
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
     ptr->data=data;
     ptr->link=head;
     return ptr;
}
int count(struct node* head){
    int count=0;
    while(head!=NULL){
        printf("\ndata:%d,link:%p",head->data,head->link);
        head=head->link;
        count++;
    }
    return count;
}
int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=12;
    head->link=NULL;
    head=addf(head,23);
    head=addf(head,45);
    head=addf(head,90);
    head=addf(head,40);
    printf("\ncount=%d",count(head));

}