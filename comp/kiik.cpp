#include<iostream>
using namespace std;


int main(){
    int test;
    cin>>test;
    char ch[100000];
    long long int len;
    int re;
    long long int lu;
    while(test--){
        cin>>len;
        cin>>ch;
        int sp=0,num=0,bst=0,sst=0;
        lu=len;
            for(int i=0;i<len;i++){
                if(ch[i]=='#'||ch[i]=='&'||ch[i]=='*'||ch[i]=='@'){
                    sp++;
                }
                if(ch[i]>='0'&&ch[i]<='9'){
                    num++;
                }
                if(ch[i]>='A'&&ch[i]<='Z'){
                    bst++;
                }
                if(ch[i]>='a'&&ch[i]<='z'){
                    sst++;
                }
            }
            
            if(sp==0){
                ch[lu]='@';
                lu++;
                
            }
            if(num==0){
                ch[lu]='1';
                lu++;
            }
            if(bst==0){
                ch[lu]='A';
                lu++;
            }
            if(sst==0){
                ch[lu]='a';
                lu++;
            }
            
            while(lu<7){
                ch[lu]='3';
                lu++;
            }
            
        }
       // ch[lu]='\0';
        cout<<ch;
    }