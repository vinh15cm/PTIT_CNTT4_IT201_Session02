#include <stdio.h>

#define MAX 100  // Kích thước tối đa mảng

// Hàm in mảng
void inMang(int arr[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(",");
    }
    printf("]\n");
}
int xoaPhanTu(int arr[], int *n , int pos) {
    if (pos >= *n || pos < 0) {
        return 0;
    }
    for (int i = pos; i < *n; i++) {
        arr[i] = arr[i + 1]; // dich trai
    }
    (*n)--; // giam so luong phan tu
    return 1;
}
int main() {
    int t;
    printf("Nhap so bo test: ");
    scanf("%d", &t);

    while (t--) {
        int n, arr[MAX], pos;

        printf("Nhap so phan tu (0 < n <= 100): ");
        scanf("%d", &n);

        if (n <= 0 || n > MAX) {
            printf("So luong khong hop le!\n");
            continue;
        }

        // Nhập mảng
        printf("Nhap %d phan tu:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        // Nhập vị trí muốn xoá
        printf("Nhap vi tri muon xoa: ");
        scanf("%d", &pos);

        // Thực hiện xoá
        if (xoaPhanTu(arr, &n, pos)) {
            inMang(arr, n);
        } else {
            printf("Khong hop le\n");
        }
    }

    return 0;
}