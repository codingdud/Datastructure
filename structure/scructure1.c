#include<stdio.h>
struct  booka
{
    char au[20];
    char title[10];
    int id;
};
int main(){
    struct booka b[4];
    for(int i=0;i<4;i++){
        printf("enter title:");
        scanf(" %s",&b[i].title);
        printf("enter a au:");
        scanf(" %s",&b[i].au);
        printf("enter id:");
        scanf(" %d",&b[i].id);
   


}

 printf("<----------------------------->\n");

//loop to get values of array structure
for(int i=0;i<4;i++)
{
    printf("output  :%s\n",b[i].au);

    printf("enter title:%s\n",b[i].title);
    printf("output  :%d\n",b[i].id);
    printf("<___________________________>\n");
}
}
