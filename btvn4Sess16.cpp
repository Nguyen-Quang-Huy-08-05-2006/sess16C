#include<stdio.h>

int main(){
	int arr[]={5,99,0,3,4,6};
	int *ptr;
	*ptr=arr[0];
	for(int i=0;i<sizeof(arr)/sizeof(arr[o]);i++){
		printf("gia tri phan tu thu %d la: %d",i+1,*ptr+i);
	}
	
	return 0;
}



