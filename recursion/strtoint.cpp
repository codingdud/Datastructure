#include<iostream>
using namespace std;
int change(char input[],int n){
    if(*input=='\0'){
        return n;
    }
   // return(((*input-48)+10*change(input+1)));
   //cout<<*input-48;
   n=n*10+(*input-48);
   //10*(*input-48)
   return(change(input+1,n));
   //cout<<n;

  // cout<<*input-48;
 return 0;
}
int main(){
    char ch[10000];
    cin>>ch;
   // printf("%d\n",'0');
    cout<<change(ch,0);

}