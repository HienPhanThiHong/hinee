#include <stdio.h>

int kiemtramang(float arr[], int n) {
    if (n == 0) {
        return 1; // mang rong duoc xem la toan gia tri am
    }
    if (arr[n-1] >= 0) {
        return 0; // neu phan tu cuoi cung khong am thi mang khong hoan toan gia tri am
    }
    return kiemtramang(arr, n-1); // kiem tra phan tu tiep theo
}

int main() {
    float arr[] = {-1, -2, -3, -4, -5};
    int n = sizeof(arr)/sizeof(float);
    if (kiemtramang(arr, n)) {
        printf("Mang toan gia tri am");
    } else {
        printf("Mang khong toan gia tri am");
    }
    return 0;
}
