#include<stdio.h>

int sum(int n){
    if(n==0) return 1;
    printf("%d",n);
    return(1+sum(n-1));
    printf("%d",n);
}

int main(){
    printf("\n %d",sum(4));
}
