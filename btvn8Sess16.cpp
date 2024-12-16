#include <stdio.h>
#include <string.h>

int main(){
	char input[100],reverse[100];
	printf("vui long nhap chuoi: ");
	fgets(input,sizeof input,stdin);
	input[strcspn(input,"\n")]='\0';
	int i=0;
	for(int i=0;strlen(input)-1>0;i++){
		reverse[i]=input[strlen(input)-1-i];
	}
	printf("chuoi ban dau [%s]\n",input);
	printf("chuoi dao [%s]",reverse);
	return 0;
}

