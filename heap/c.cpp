#include<iostream>
using namespace std;

int main()
{
   // This memory for 10 integers
   // is allocated on heap.
   int *ptr= new int[10];
for(int i=0;i<10;i++){
       printf("enter a number:");
       scanf("%d",(ptr+i));
   }
for(int j=0; j<10; j++)
{
    cout<<*(ptr+j)<<endl;
}
delete [] ptr;
}
