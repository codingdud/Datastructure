#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

int main(){
    struct node head;
    head.data=23;
    head.link=NULL;
    int temp;
    struct node* head2=&head;
    printf("%d",head2->data);
    scanf("%d",&head2->data);
    //head2->data=temp;
    printf("%d",head2->data);

    struct node** head3=&head2;
    printf("\nlocation of head3:%d",&head3);
    printf("\nlocation of head2:%d,,,,,%d",head3,&head2);
    printf("\nlocation of head1:%d,,,,,%d",head2,&head);
     printf("\nlocation of head3:%d",*head3);

}