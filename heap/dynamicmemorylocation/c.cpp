#include<iostream>
using namespace std;
int main(){
    int *p=new int[10];
    cin>>*p;
    cin>>*(p+1);
     cin>>*(p+2);
      cin>>*(p+3);
       cin>>*(p+4);
        cin>>*(p+5);
    cout<<*p<<" "<<*(p+1)<<" "<<*(p+2)<<" "<<*(p+4)<<" "<<*(p+5)<<endl;
}
