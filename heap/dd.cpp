#include<iostream>
using namespace std;


int main(){
int **p=new int*[10];
//int *a=new [10];
//
for(int i=0;i<2;i++){
    p[i]=new int[20];
    for(int j=0;j<2;j++){
        cin>>p[i][j];
    }


}
 for(int i=0;i<2;i++){
       for(int j=0;j<2;j++){
           cout<<p[i][j];
   }

 }
}
