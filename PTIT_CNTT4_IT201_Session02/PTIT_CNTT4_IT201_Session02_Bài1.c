#include <stdio.h>
#define MAX 100 // kich thuoc toi da cua mang

// do phuc tap khong gian : O(1) - chi dung 1 bien max
int timMax(int arr[], int n){
int max = arr[0]; // gia su phan tu dau tien la lon nhat

      for(int i=1;i<n;i++){
if(arr[i]>max){
max = arr[i];
}
}
return max;
}
int main() {
    int n;
    int arr[MAX];

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = timMax(arr, n);
    printf("Gia tri lon nhat la: %d\n", max);

    return 0;
}
