#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n,j;
    char temp;
    char str[10000];
    //printf("enter number of test case");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {

        scanf("%d",&j);
        scanf("%s",str);
        int count=1;
        int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
       
        
        for (int h= 0; h<j; h++){
            
        
            if(str[h]!='a'&&str[h]!='e'&&str[h]!='i'&&str[h]!='o'&&str[h]!='u'){
              //  printf("%c\n",str[h]);
                if(abs(str[h]-'a')<=abs(str[h]-'e') &&abs(str[h]-'a')<=abs(str[h]-'i') &&abs(str[h]-'a')<=abs(str[h]-'o') &&abs(str[h]-'a')<=abs(str[h]-'u')) {
                    temp='a';
                    //str[h]=temp;
                    //printf("\n1\n");
                    
                    if(flag4==1){
                        count++;
                       
                    }
                    
                    flag4++;
                   
                }
                if(abs(str[h]-'e')<=abs(str[h]-'a') &&abs(str[h]-'e')<=abs(str[h]-'i') &&abs(str[h]-'e')<=abs(str[h]-'o') &&abs(str[h]-'e')<=abs(str[h]-'u')){
                    temp='e';
                     //printf("\n1\n");
                    //str[h]=temp;
                    if(flag5==1){
                        count++;
                        
                    }
                    
                    flag5++;
                   
                }
                if(abs(str[h]-'i')<=abs(str[h]-'e') &&abs(str[h]-'i')<=abs(str[h]-'a') &&abs(str[h]-'i')<=abs(str[h]-'o') &&abs(str[h]-'i')<=abs(str[h]-'u')){
                    temp='i';
                    // printf("\n1\n");
                    //str[h]=temp;
                    if(flag1==1){
                        count++;
                        flag1=0;
                    }
                    
                    flag1++;
                   
                }
                if(abs(str[h]-'o')<=abs(str[h]-'a') &&abs(str[h]-'o')<=abs(str[h]-'i') &&abs(str[h]-'o')<=abs(str[h]-'a') &&abs(str[h]-'o')<=abs(str[h]-'u')){
                    temp='e';
                   //  printf("\n1\n");
                    //str[h]=temp;
                    if(flag2==1){
                        count++;
                        
                    }
                    
                    flag2++;
                 }
                 if(abs(str[h]-'u')<=abs(str[h]-'e') &&abs(str[h]-'u')<=abs(str[h]-'i') &&abs(str[h]-'u')<=abs(str[h]-'o') &&abs(str[h]-'u')<=abs(str[h]-'a')) {
                    temp='u';
                  //  printf("\n1\n");
                    //str[h]=temp;
                    if(flag3==1){
                        count++;
                        
                    }
                    
                    flag3++;
                   
                }
            }
        
      }
      if(count==1)
      printf("%d\n",count);
      else
      printf("%d\n",count+1);

    }

}
    
