#include<stdio.h>
#include<stdlib.h>
int nerest(char ch){
 int temp;
 temp=abs(ch-'a')<=abs(ch-'e')&&abs(ch-'a')<=abs(ch-'i')&&abs(ch-'a')<=abs(ch-'o')&&abs(ch-'a')<=abs(ch-'u')?abs(ch-'a'):0;
 if(temp!=0) return temp;
 temp=abs(ch-'e')<=abs(ch-'a')&&abs(ch-'e')<=abs(ch-'i')&&abs(ch-'e')<=abs(ch-'o')&&abs(ch-'e')<= abs(ch-'u')?abs(ch-'e'):0;
 if(temp!=0) return temp;
 temp=abs(ch-'i')<=abs(ch-'e')&&abs(ch-'i')<=abs(ch-'a')&&abs(ch-'i')<=abs(ch-'o')&&abs(ch-'i')<=abs(ch-'u')?abs(ch-'i'):0;
 if(temp!=0) return temp;
 temp=abs(ch-'o')<=abs(ch-'e')&&abs(ch-'o')<=abs(ch-'i')&&abs(ch-'o')<=abs(ch-'a')&&abs(ch-'o')<=abs(ch-'u')?abs(ch-'o'):0;
 if(temp!=0) return temp;
temp= abs(ch-'u')<=abs(ch-'e')&&abs(ch-'u')<=abs(ch-'i')&&abs(ch-'u')<=abs(ch-'o')&&abs(ch-'u')<=abs(ch-'a')?abs(ch-'u'):0;
 if(temp!=0) return temp;
}

int main(){
    char str[1000];
    int n;
    int temp;
    int count=1;
    char ch;
    int b;
    char tempo;
    scanf("%d",&b);
    while(b--){
        count=1;
        scanf("%d",&n);
        scanf("%s",str);
       // printf("%s",str);
    for(int i=0;i<n;i++){
        ch=str[i];
        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'){
            //printf("%c",str[i]);
            temp=nerest(str[i]);
            for(int j=i+1;j<n;j++){
              if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'){
              if(temp==nerest(str[j])){
                  count++;
                  break;
                }
            }
            
        }

        }else{
           // printf("hello\n");
        }
    }
    printf("\n%d",count);
    }

}