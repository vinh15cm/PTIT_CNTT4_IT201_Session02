#include <stdio.h>
#define MAX 100
void daoNguocMang(int arr[], int n) {
    int left =0;
    int right=n-1;
    while (left < right) {
        // hoan doi 2 phan tu
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        // tien toi cap tiep theo
        left++;
        right--;

    }
}
// ham in mang
void inMang(int arr[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n-1) printf(",");
    }
    printf("]\n");
}
int main() {
    int t;
    printf("nhap bo so test");
    scanf("%d", &t);
    while (t--) {
        int n, arr[MAX];

        printf("nhap so phan tu (0<n<100):");
        scanf("%d", &n);

        if ( n <= 0 || n > 100 ) {
            printf("gia tri n khong hop le !\n");
            continue;
        }
        printf("nhap %d phan tu : \n ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        // in mang goc
        printf("Mang goc :");
        inMang(arr, n);

        // dao nguoc mang
        daoNguocMang(arr,n);
        // in mang sau khi dao nguoc
        printf("mang dao nguoc:");
        inMang(arr, n);
    }
    return 0;
}
