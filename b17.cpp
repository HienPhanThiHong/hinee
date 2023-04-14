#include <stdio.h>
#include <math.h>

double tong(double arr[], int size){
    if (size == 0) {
        return 0; // n?u size = 0, tr? v? 0
    }
    else {
        return arr[size-1] + tong(arr, size-1); // l?y ph?n t? cu?i cùng và c?ng v?i t?ng ph?n t? còn l?i
    }
}

int main(){
    double arr[] = {1.5, 2.3, 3.7, 4.1, 5.2};
    int size = sizeof(arr) / sizeof(arr[0]);
    double total = tong(arr, size);
    printf("Tong cua mang la: %lf", total);
    return 0;
}