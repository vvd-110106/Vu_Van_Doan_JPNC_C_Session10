#include<stdio.h>

int main(){
	int arr[] = { 83, 86, 68, 66, 88};
	int n = sizeof(arr)/sizeof(int);
	
	printf("Mang truoc khi sap xep:\n ");
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
		for(int j=0; j <n-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	printf("\nMang sau sap xep: \n");
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;
}
