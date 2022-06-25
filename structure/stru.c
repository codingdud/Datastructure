#include<stdio.h>


//variable roll_no,name and class declear with structure amd can't be initialize
struct akanoob{
    int roll_no;
    char name[200];
    char sem[100];
    char sec;
}p1;
//variable p1 declear with akanoob
int main(){
    struct akanoob p1;
    p1.roll_no=2128117;
    scanf("%s",&p1.name);
    scanf("%s",&p1.sem);
    scanf("%s",&p1.sec);

    printf("%d , %s , %s , %c",p1.roll_no,p1.name,p1.sem,p1.sec);
   

}
