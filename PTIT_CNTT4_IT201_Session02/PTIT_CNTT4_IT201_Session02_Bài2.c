#include <stdio.h>
#define MAX 100
int demSoLanXuatHien(int arr[], int n, int x) {
    int count = 0; // bien dem so lan xuat hien
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++; // tang bien dem neu phan tu trung voi x
        }
    }
    return count;
}
int main() {
    int t ;// bo so test (mang)
    printf("nhap bo so test");
    scanf("%d", &t);

    while (t--) {
        int n,x;
        int arr[MAX];

        // nhap so phan tu
        printf("nhap so phan tu cua mang(0 < n < 100):");
        scanf("%d", &n);

        if (n <= 0 || n >100) {
            printf("gia tri n khong hop le!\n");
            continue;
        }
        // nhap cac phan tu khac cua mang
        printf("nhap so can kiem tra:");
        scanf("%d", &x);

        // dem so lan xuat hien va in ket qua
        int ketQua = demSoLanXuatHien(arr,n,x);
        printf("%d\n", ketQua);

    }
    return 0;
}