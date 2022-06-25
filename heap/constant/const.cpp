#include<iostream>
using namespace std;

int main(){
int i=10;
const int &k=i;
i++;


cout<<i<<endl;
cout<<k<<endl;

//constant refrence from a const int
const int j2=12;
int const &k2=j2;
cout<<j2<<endl;
cout<<k2<<endl;

//wrong concept
/*
  int j=12;
  const int &k=j;
  k++;
  j++;         8000
     j800  _____________
           |           |
           |___________|    
   int &k const 800

*/

// constant


}

