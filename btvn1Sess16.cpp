#include<stdio.h>
 int main(){
 	int a=5,b=15;
 	int *ptra;
 	int *ptrb;
 	ptra=&a;
 	ptrb=&b;
 	printf("gia tri cua a %d va dia chi %d\n",a,ptra);
	printf("gia tri cua b %d va dia chi %d",b,ptrb);

 	return 0;
 }
