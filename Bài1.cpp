#include <stdio.h>

int main() {
    int a[10];
    int n;
    printf("Nhap so luong phan tu cua mang (toi da 10): ");
    scanf("%d", &n);
    // Nhap gia tri cho cac phan tu
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // In cac phan tu tu cuoi ve dau
    printf("Cac phan tu cua mang tu cuoi ve dau la:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    return 0;
}
