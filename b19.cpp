#include <stdio.h>

float timgiatrilonnhatdequy(float arr[], int n) {
    // mang chi co mot phan tu
    if (n == 1) {
        return arr[0];
    }
    // de quy tim gia tri lon nhat trong mang con ben phai
    float max = timgiatrilonnhatdequy(arr, n - 1);
    // so sanh gia tri lon nhat trong mang con ben phai voi gia tri cua phan tu cuoi cùng trong mang hien tai
    if (arr[n-1] > max) {
        max = arr[n-1];
    }
    return max;
}

int main() {
    float arr[5] = {3.5, -2.0, 7.1, 1.8, -5.6};
    int n = 5;
    float max = timgiatrilonnhatdequy(arr, n);
    printf("Gia tri lon nhat trong mang la: %f", max);
    return 0;
}