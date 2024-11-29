#include <stdio.h>
int main() {
    int m, n, i, j, sum = 0;
    // Nhap so hang va so cot cua ma tran
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &m);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &n);
    // Khai bao mang hai chieu
    int a[m][n];
    // Nhap gia tri cho cac phan tu cua ma tran
    printf("Nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Nhap phan tu a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // Tinh tong cac phan tu tren duong bien
    for (i = 0; i < m; i++) {
        sum += a[i][0];
        sum += a[i][n - 1];
    }
    for (j = 1; j < n - 1; j++) {
        sum += a[0][j]; //
        sum += a[m - 1][j]; //
    }
    // In ket qua
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);
    return 0;
}
