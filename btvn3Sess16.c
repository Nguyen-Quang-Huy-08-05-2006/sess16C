#include<stdio.h>

int main(){
	int a=5,b=10;
	printf("a = %d, b = %d\n",a,b);
	int total=a+b;
	int *ptr;
	ptr=&total;
	*ptr=total;
	printf("%d + %d = %d",a,b,*ptr);
	printf("\n%d",ptr);
	return 0;
}



