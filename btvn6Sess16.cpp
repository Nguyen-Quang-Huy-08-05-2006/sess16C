#include<stdio.h>
int search(int arr2[],int size,int num);
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int size=sizeof(arr)/sizeof(arr[0]);
	int num;
	printf("nhap vao gia tri ban muon tim kiem: ");
	scanf("%d",&num);
	int position=search(arr,size,num);
	if(position!=0){
		printf("%d co vi tri %d trong mang ",num,position);
	}else{
		printf("%d khong ton tai trong mang",num);
	}
	return 0;	
}

int search(int *arr2,int size,int num){
	for(int i=0;i<size;i++){
		if(*(arr2+i)==num){
			return i;
		}
	}
	return 0;
}
