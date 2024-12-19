#include <stdio.h>

int main() {
    int n;
    
    printf("nhap 1 so nguyen: ");
    scanf("%d", &n);

    if (n <= 0 ) { 
        printf("nhap so lon hon 0\n");
        return 1;
    }
    int matrix[100][100];
    printf("Nhập giá trị cho ma trận %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhập phần tử [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Ma trận vuông %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}
