#include <stdio.h>

int main() {
    int m, n;

    printf("nhap hang: ");
    scanf("%d", &m);
    printf("nhap cot: ");
    scanf("%d", &n);

    int matrix[m][n];

    printf("nhap phan tu:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;

    for (int j = 0; j < n; j++) {
        sum += matrix[0][j];      
        if (m > 1) {
            sum += matrix[m - 1][j]; 
        }
    }

    for (int i = 1; i < m - 1; i++) {
        sum += matrix[i][0];      
        if (n > 1) {
            sum += matrix[i][n - 1]; 
        }
    }

    printf("tong cac phan tu tren duong bien: %d\n", sum);

    return 0;
}
