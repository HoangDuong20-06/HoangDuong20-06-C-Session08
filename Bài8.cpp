#include <stdio.h>
int main() {
    int n;
    printf("Nhap kich thuoc cua ma tran vuong: ");
    scanf("%d", &n);
    // Khai bao ma tran vuong
    int matrix[n][n];
    // Nhap gia tri cho cac phan tu trong ma tran
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Tinh tong va in cac phan tu tren duong cheo phu
    int sum = 0;
    printf("Cac phan tu tren duong cheo phu la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - i - 1]);
        sum += matrix[i][n - i - 1];
    }
    printf("\nTong cac phan tu tren duong cheo phu la: %d\n", sum);
    return 0;
}
