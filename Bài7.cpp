#include <stdio.h>
int main() {
	//Nhap kich thuoc cua ma tran vuong
    int n;
    printf("Nhap kich thuoc cua ma tran vuong: ");
    scanf("%d", &n);
    // Khai bao ma tran
    int matrix[n][n];
    // Gan gia tri cho ma tran
	int i,j ;
    printf("Nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Nhap phan tu matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    // In cac phan tu tren duong cheo chinh
    printf("Cac phan tu tren duong cheo chinh la: ");
    for (int i = 0; i < n; i++) {
    printf("%d ", matrix[i][i]);
    }
    printf("\n");
    // Tinh tong cac phan tu tren duong cheo chinh
    int sum = 0;
    for (int i = 0; i < n; i++) {
    sum += matrix[i][i];
    }
    // In tong
    printf("Tong cac phan tu tren duong cheo chinh la: %d\n", sum);
    return 0;
}
