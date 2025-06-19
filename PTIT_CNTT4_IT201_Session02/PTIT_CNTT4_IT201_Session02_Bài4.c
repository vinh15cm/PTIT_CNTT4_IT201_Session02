#include <stdio.h>
#define MAX 100
void inMang(int arr [], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
        if (i < n - 1) printf(",");
    }
    printf("]\n");
}
void capNhatPhanTu(int arr [], int n, int position, int value) {
    if (position >=0 && position < n) {
        arr[position] = value;// gan gia tri moi
    }else {
        printf("vi tri khong hop le\n");
    }
}
int main() {
    int t;
    printf("nhap so bo test :");
    scanf("%d", &t);
    while (t--) {
        int n, arr[MAX];
        int position, value;
        printf("nhap phan tu (0<n<100):");
        scanf("%d", &n);
        if ( n <= 0 || n > MAX ) {
            printf("so phan tu khong hop le\n");
            continue;
        }
        // nhap mang
        printf("nhap %d phan tu:\n",n) {
            scanf("%d", &arr[i]);
        }
        // nhap vi tri va gia tri moi
        printf("nhap vi tri can sua:");
        scanf("%d", &position);
        printf("nhap gia tri moi:")
        scanf("%d", &value);
        // cap nhat
        capNhatPhanTu(arr, n, position, value);
        // in mang ket qua
        inMang(arr,n);
    }
    return 0;
}