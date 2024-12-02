#include<stdio.h>

int main(){
	int arr[]={83, 86, 68, 66, 88};
	int n= sizeof(arr)/sizeof(int);
	printf("Mang truoc khi sap xep la: \n");
	
	for (int i=0; i<n; i++){
		printf("%d\t", arr[i]);
		int key = arr[i];
		int j = i-1;
		
		while(j>=0 && arr[j]> key){
			arr[j+i]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	printf("\nMang sau khi sap xep la: \n");
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;
}
