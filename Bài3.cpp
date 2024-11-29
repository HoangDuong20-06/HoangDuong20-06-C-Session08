#include <stdio.h>
int main() {
    int n, i, j;
    // Nhap kich thuoc cua ma tran
    printf("Nhap kich thuoc cua ma tran vuong (n x n): ");
    scanf("%d", &n);
    // Khai bao mang 2 chi?u
    int a[n][n];
    // Nhap gia tri cho cac phan tu cua mang
    printf("Nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Nhap phan tu a[%d][%d]: ", i, j);
            scanf("%2d", &a[i][j]);
        }
    }
    // In ma tran
    printf("Ma tran vua nhap la:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%2d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
