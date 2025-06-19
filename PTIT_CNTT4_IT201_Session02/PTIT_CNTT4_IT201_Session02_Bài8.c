#include <stdio.h>
#define MAX 100;
void timPhanTuLonHonSauNo(int arr[],int n) {
    int ketQua[];
    int dem =0;
    int maxPhiaSau = arr[n-1];
    ketQua(dem++) = arr[n-1];

    // duyet tu phai sang trai
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > maxPhiaSau) {
            ketQua[dem--] = arr[i];
            maxPhiaSau = arr[i]; // cap nhat gia tri lon nhat ben phai
        }
    }
    for (int i = n-1; i >= 0; i--) {
        printf("%d",ketQua[i]);
        if (i > 0) printf(" , ");
    }
    printf("\n");
}
int main() {
    int t;
    printf("nhap bo so text:");
    scanf("%d", &t);
    while(t--) {
        int n,arr[];
        printf("nhap so phan tu(0<n<=100):");
        scanf("%d", &n);
        if (n<=0 || n>100) {
            printf("so luong khong hop le!\n");
            continue;
        }
        printf("nhap %d phan tu : \n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        timPhanTuLonHonSauNo(arr,n);
    }
    return 0;
}