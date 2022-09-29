#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int x,y;
    int count;
    scanf("%d %d",&x,&y);
    //printf("wve %d %d",x,y);
    if(x==y){
        printf("0");
        exit(0);
    }
    if(x<y||y<x){
       count=abs(x-y);
       if(count==1){
           printf("1");
           exit(0);         
           }

    }
   // printf("aasnuhasbv");
    if(x<y){
        for(int i=1;i<y/2;i++){
            if(y%i==0){
                if(i==x){
                    printf("1");
                    exit(0);
                }

            }
        }
    }
    else if(y<x) {
        for(int i=1;i<x/2;i++){
            if(x%i==0){
                if(i==y){
                    printf("1");
                    exit(0);
                }
            }
        }
    }
    printf("2");

}