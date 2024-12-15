#include<stdio.h>
void newarr(int *arr,int size,int fix,int num);
int main(){
	int arr[]={5,99,0,3,4,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	int fix,num;
	for(int i=0;i<size;i++){
		printf("%d, ",arr[i]);
	}
	printf("\n");
	printf("nhap vi tri ban muon sua: ");
	scanf("%d",&fix);
	printf("nhap gia tri ban muon sua: ");
	scanf("%d",&num);
	newarr(arr,size,fix,num);
	printf("mang sau khi cap nhat: ");
	for(int i=0;i<size;i++){
		printf("%d, ",arr[i]);
	}
	return 0;
}

void newarr(int *arr,int size,int fix,int num){
	if(fix>=0&&fix<size){
		*(arr+fix)=num;
	}else{
		printf("vi tri khong hop le");
	}
}
