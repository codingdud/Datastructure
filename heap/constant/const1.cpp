#include<iostream>
using namespace std;
int main(){
    int i=10;
    const int* p=&i;
    printf("%d   %d\n",i,*p);
    i++;
    printf("%d   %d\n",i,*p);
    //*p++;
    
}
