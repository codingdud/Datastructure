#include<iostream>
#include<math.h>

using namespace std;
int main(){
    char ch[100];
    int count=0;
    int k,n;
    scanf("%d",&k);
    while(k--){
    scanf("%d",&n);
    scanf("%s",ch);
    for(int i=0;i<n;i++){
        if(ch[i]=='c'){
            count++;
            
        }
        if(ch[i]=='g'){
            count++;
           
        }
        if(ch[i]=='l'){
            count++;
            
        }
        if(ch[i]=='r'){
            count++;
           
        }
    }
    //if(count==0) printf("%d\n",1);
    //else{
    count=pow(2,count);
    printf("%d\n",count);
    }
}