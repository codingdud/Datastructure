#include<stdio.h>
int count(int n){
    if(n==0)
    return 1;
    printf("\n%d",n);
    count(n-1);
    printf("\n%d",n);
    return 0;
    

}

int main(){
    printf("\n%d",count(5));
}