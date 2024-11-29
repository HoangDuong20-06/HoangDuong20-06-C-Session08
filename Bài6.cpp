#include <stdio.h>
int main() {
    int n, i, j, sum = 0;
    // Nhap kich thuoc cua ma tran vuong
    printf("Nhap kich thuoc cua ma tran vuong (n x n): ");
    scanf("%d", &n);
    // Khai báo mang hai chieu
    int a[n][n];
    // Nhap gia tri cho cac phan tu cua ma tran
    printf("Nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Nhap phan tu a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // In cac phan tu tren duong cheo chinh va tinh tong
    printf("Cac phan tu tren duong cheo chinh la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
        sum += a[i][i];
    }
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);
    return 0;
}
