#include<stdio.h>

int main() {
    int arr[] = {83, 86, 68, 66, 88};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n - 1; i++) {  
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    printf("Mang sau sap xep là: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}

