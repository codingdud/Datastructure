#include<stdio.h>
#include<stdlib.h>

struct node
{
    int dataptr;
    struct node *link;

}*head; 
int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    //head=(struct node*)malloc(sizeof(struct node));
    head->dataptr=45;
    head->link=NULL; 
    printf("%d",head);

    return 0;
    

}
