#include <stdio.h>

int main() {
    int n, m;
    printf("Nhap so hang (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);
    
    int arr[n][m];
    printf("Nhap cac phan tu cua mang 2 chieu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        	printf("Phan tu arr[%d][%d]", i, j); 
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            for (int k = i + 1; k < n; k++) {
                if (arr[i][j] > arr[k][j]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }
    
    printf("Mang sau khi sap xep cac dong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
