#include<stdio.h>
#include<stdlib.h>


//variable roll_no,name and class declear with structure amd can't be initialize
struct student{
    
    char name[200];
    char sem[100];
    char sec;
    //int roll_no;
}p1;
//variable p1 declear with akanoob
int main(){

    struct student p1;
    struct student p2={"Animesh","2nd",'A'};
    //p1.roll_no=2128117;
   // p1.name[1]="A";
   // p1.sec="A";
   // p1.sem[1]="1";
    scanf("%s",&p1.name);
    scanf("%s",&p1.sem);
    scanf("%s",&p1.sec);

    printf(" , %s , %s , %c",p2.name,p2.sem,p2.sec);
    printf("\n , %s , %s , %c",p1.name,p1.sem,p1.sec);
    printf("\n%d",sizeof(p1));

}
