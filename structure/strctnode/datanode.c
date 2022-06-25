#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;

};

int countnode(struct node* node){
int count=0;
struct node *ptr=node;
while(ptr!=NULL){
    count++;
    printf("\nnode no.:%d data:%d",count,ptr->data);
    ptr=ptr->link;
    

}
return count;
}




int main(){
    struct node *head=NULL;
    struct node *head1=NULL;
    struct node *head2=NULL;

    head=(struct node*)malloc(sizeof(struct node));
    head1=(struct node*)malloc(sizeof(struct node));
    head2=(struct node*)malloc(sizeof(struct node));
    head->data=11;
    head->link=head1;
    head1->data=22;
    head1->link=head2;
    head2->data=33;
    head2->link=NULL;
    printf("\ndata:%d",head->data);
    printf("\nlink:%d",head->link);
    printf("\ndata:%d",head1->data);
    printf("\nlink:%d",head1->link);
    printf("\ndata:%d",head2->data);
    printf("\nlink:%d",head2->link);
    


    int count=countnode(head);
    printf("\nnumber of node =%d",count);
    return (0);

}
//*ptr=*ptr->link;

    /*
       int b=1;
       int* a;
       a=&b;
       *a=2;
    */