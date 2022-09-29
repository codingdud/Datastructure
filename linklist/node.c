#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};
struct node* add(struct node* ptr,int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    ptr->link=temp;
    temp->data=data;
    temp->link=NULL;
    return temp;

}
int count_data(struct node *head){
    int count=0;
    struct node* ptr=head;
    while(ptr!=NULL){
        printf("\ndata:%d,link:%p",ptr->data,ptr->link);
        ptr=ptr->link;
        count++;
    }
    return count;

}


int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=12;
    head->link=NULL;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp=add(head,34);
    temp=add(temp,54);
    temp=add(temp,23);
    temp=add(temp,12);
    temp=add(temp,111111);
    int count=count_data(head);
    printf("\ncount=%d",count);
    
   
    /* struct node *curent=(struct node*)malloc(sizeof(struct node));
     head->link=curent;
    head->data=45;
    curent=(struct node*)malloc(sizeof(struct node));
    curent->data=90;
    curent->link=NULL;
    head->link->link=curent;

    printf("%d",head->link);
    count(head);
 */
}