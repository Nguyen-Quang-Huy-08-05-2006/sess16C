#include<stdio.h>
 int main(){
 	int a=5,b=15;
 	int *ptra;
 	int *ptrb;
 	printf("gia tri cua a la: %d\n",a);
 	printf("gia tri cua b la: %d\n",b);
 	ptra=&a;//7564
 	ptrb=&b;//7560
 	*ptra=15;
 	*ptrb=5;
 	printf("gia tri cua a sau khi thay doi la: %d\n",a);
	printf("gia tri cua b sau khi thay doi la: %d",b);

 	return 0;
 }
