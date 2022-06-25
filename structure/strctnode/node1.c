#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;

};




int main(){
    struct node *head=NULL;
    struct node *head1=NULL;
    struct node *head2=NULL;

    head=(struct node*)malloc(sizeof(struct node));
    head1=(struct node*)malloc(sizeof(struct node));
    head2=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->link=head1;
    head1->data=2;
    head1->link=head2;
    head2->data=3;
    head2->link=NULL;
    printf("\n%d",head->data);
    printf("\n%d",head->link);
    printf("\n%d",head1->data);
    printf("\n%d",head1->link);
    printf("\n%d",head2->data);
    printf("\n%d",head2->link);
    return (0);

}