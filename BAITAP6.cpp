#include <stdio.h>

int main() {
    int n, i, j;
    int sum = 0; 

    printf("Nhap kich thuoc ma tran vuong (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Cac phan tu tren duong cheo chinh: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]); 
        sum += matrix[i][i];        
    }
    printf("\nTong cac phan tu tren duong cheo chinh: %d\n", sum);

    return 0;
}

