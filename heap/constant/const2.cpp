#include<iostream>
uning namespace std;

void f(int *p){
    (*P)++;
    cout<<*p<<endl;

}


int main(){
    int i=10;
    int *j=&i;
    f  (j);

}
