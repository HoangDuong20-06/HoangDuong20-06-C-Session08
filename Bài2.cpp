#include <stdio.h>
int main() {
    int a[100];
    int n, x, i;
    // Nhap so luong phan tu cua mang
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    // Nhap gia tri cho cac phan tu
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Nhap phan tu can tim
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    // Duyet mang de tim phan tu
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("Vi tri cua phan tu %d trong mang la: %d\n", x, i);
            return 0;
        }
    }
    printf("Phan tu %d khong ton tai trong mang.\n", x);
    return 0;
}
