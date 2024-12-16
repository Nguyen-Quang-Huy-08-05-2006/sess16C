#include<stdio.h>
void sort(int *arr, int size);

int main(){
	int arr[]={7,0,33,5621,895};
	int size=sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
	return 0;
}

void sort(int *arr,int size){
	int num;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(*(arr+j)>*(arr+j+1)){
				num=*(arr+j+1);
				*(arr+j+1)=*(arr+j);
				*(arr+j)=num;
			}
		}
	}
	for(int i=0;i<size;i++){
		printf("%d, ",*(arr+i));
	}
}
