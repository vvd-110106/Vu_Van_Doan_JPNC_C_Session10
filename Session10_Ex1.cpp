#include<stdio.h>

int main(){
	int number[]={11, 01, 2006, 2005, 27, 04,8386};
	int flag =-1;
	int luachon;
	int size= sizeof(number)/sizeof(int);
	for( int i=0; i<size; i++){
		printf("ban hay nhap phan tu ban can tim: ");
		scanf("%d", &luachon);
		if(number[i]==luachon){
			flag=i;
			break;
		}
	}
	if(flag!=-1){
		printf("Phan tu can tim o vi tri: %d", flag);
	}else{
		printf("Phan tu khong tim thay trong mang");
	}
	return 0;
}
