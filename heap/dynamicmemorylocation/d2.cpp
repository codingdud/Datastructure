#include<iostream>
using namespace std;


int main(){
    int **d2=new int*[2];
    
    int k=1;

    for(int i=0;i<5;i++){
        d2[i]=new int[2];
        for(int j=0;j<5;j++){
            d2[i][j]=k;
            k++;

        }
    }
 for(int i=0;i<2;i++){
          for(int j=0;j<2;j++){
              cout<<d2[i][j]<<endl;
         }
  }    


for(int i=0;i<2;i++){
    delete []d2[i];


}
delete []d2;

}
