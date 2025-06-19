#include <stdio.h>
#define MAX 100;
int timCapTongBangX(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] + arr[j] == x) {
                printf("%d,%d\n",arr[i],arr[j]);
                return 1;
            }
        }
    }
    return 0;
}
int main() {
    int t ;
    printf("nhap so bo test:");
    scanf("%d", &t);
    while (t--) {
        int n, arr[], target;
        printf("nhap so phan tu (0<n<100):");
        scanf("%d", &n);
        if (n <= 0 || n > MAX) {
            printf("so luong khong hop le! \n");
            continue;
        }
        printf("nhap %d so phan tu :\n",n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("nhap tong can tim:");
        scanf("%d", &target);

        // goi ham tim cap co tong = target
        if (!timCapTongBangX(arr,n,target)) {
            printf("khong tim thay \n");
        }

    }
    return 0;
}