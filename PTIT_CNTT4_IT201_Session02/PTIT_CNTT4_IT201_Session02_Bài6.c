#include <stdio.h>
#define MAX 100
void inMang(int arr[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(",");
    }
    printf("]\n");
}
int themPhanTu(int arr[], int *n, int pos , int value ) {
    if (*n >= MAX || pos < 0 || pos > *n) {
        return 0;
    }
    for (int i = *n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*n)++;
    return 1;
}
int main() {
    int t ;
    printf("Nhap so bo test: ");
    scanf("%d", &t);
    while (t--) {
        int n,arr[MAX];
        int pos,value;
        printf("nhap so phan tu (0<n<=100):");
        scanf("%d", &n);
        if (n<0||n>MAX) {
            printf("so luong khong hop le! \n");
            continue;
        }
        printf("Nhap %d phan tu :\n",n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("nhap vi tri muon them :");
        scanf("%d", &pos);
        printf("Nhap gia tri muon them:");
        scanf("%d", &value);
        // goi ham them
        if (themPhanTu(arr, &n, pos, value)) {
            inMang(arr, n);
        }else {
            printf("khong hop le !\n");
        }
    }
    return 0;
}