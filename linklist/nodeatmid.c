#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};
//adding node at beginning
struct node* addf(struct node* head,int data){
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
     ptr->data=data;
     ptr->link=head;
     return ptr;
}
//counting,print data and location of every node
int count(struct node* head){
    int count=0;
    while(head!=NULL){
        printf("\ndata:%d,link:%p",head->data,head->link);
        head=head->link;
        count++;
    }
    return count;
}
//inserting a node at give index
void insert(struct node* head,int no,int data){
    int count=0;
    while(head!=NULL){
        count++;
        if(count==no){
            struct node* new=(struct node*)malloc(sizeof(struct node));
            new->data=data;
            new->link=head->link;
            head->link=new;
            break;
        }
        
        head=head->link;
    }
    return;
}
//deleting a node at given index
void del(struct node* head,int no){
    struct node* del=NULL;
    int count=0;
    while(head!=NULL){
        count++;
        if(count==no){
            del=head->link;
            head->link=head->link->link;//del->link;
            free(del);
            break;
        }
        head=head->link;
    }
    return;
}
//deleting every node
struct node* deleteevery(struct node* head){
    struct node* del=NULL;
    while(head!=NULL){
        del=head->link;
        printf("\ndata:%d,link:%p",head->data,head->link); 
        free(head);
        printf("\ndata:%d,link:%p",head->data,head->link);
        head=del;
            
    }
    head=NULL;
    return head;

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
    insert(head,2,23456);
    printf("\ncount=%d",count(head));
    del(head,2);
    printf("\ncount=%d",count(head));
    head=deleteevery(head);
    printf("\ncount=%d",count(head));


}