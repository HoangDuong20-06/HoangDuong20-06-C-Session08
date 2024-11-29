#include <stdio.h>
int main() {
    int m, n, i, j, max;
    // Nhap so hang va so cot cua ma tran
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &m);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &n);
    // Khai bao mang hai chieu
    int a[m][n];
    // Nhap gia tri cho cac phan tu cua mang
    printf("Nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Nhap phan tu a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // Gan phan tu dau tien lam gia tri lon nhat ban dau
    max = a[0][0];
    // Tim phan tu lon nhat
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    // In ra phan tu lon nhat
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    return 0;
}
