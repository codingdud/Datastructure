#include <stdio.h> // header file for Standard Input Output
#include <stdlib.h> // header file for Standard Library

int main() {

	 long long int n;
	  long long int *arr=(long long int*)malloc(n*sizeof(long long int));
	 long long int k;
	 scanf("%lld %lld",&n,&k);
	 for(int i=0;i<n;i++){
		 scanf("%lld",(arr+i));
	 }
	 int count;
     int j;
	 for(j=0;j<n;j++){
	 for(int i=0;i<n;i++){
            if((*(arr+i)-j)==k) count++;
	 }
	 if(count<=2){
		 break;
	 }
	 }
	 printf("%d",j);

	return 0;
}
