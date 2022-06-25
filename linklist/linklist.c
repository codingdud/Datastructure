#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* add(struct node* head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=NULL;
    head->link=ptr;
    return ptr;


}
int count_data(struct node* head){
    struct node* temp;
    temp=head;
    int count=0;
    while(temp!=NULL){
        
        printf("\ndata:%d,link:%p",temp->data,temp->link);
        temp=temp->link;
        count++;
    }
    return count;
}

int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=12;
    struct node* ptr=add(head,23);
    ptr=add(ptr,24);
    ptr=add(ptr,345);


    int i=count_data(head);
    printf("\nlength of list:%d",i);

}