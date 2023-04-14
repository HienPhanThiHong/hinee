#include <iostream>
using namespace std;

int tinhtongdequycacsochan(int arr[], int size) {
    // neu mang chi con mot phan tu
    if (size == 1) {
        if (arr[0] % 2 == 0) {
            return arr[0];
        } else {
            return 0;
        }
    }
    
    // Neu mang con nhieu hon mot phan tu, tinh tong cac so chan trong mang con ben trai va ben phai
    int mid = size / 2;
    int sumLeft = tinhtongdequycacsochan(arr, mid);
    int sumRight = tinhtongdequycacsochan(arr + mid, size - mid);
    
    // Tong các so chan trong mang chinh bang tong cac so chan trong mang con ben trai va ben phai
    return sumLeft + sumRight;
}

int main() {
    int arr[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int sumEven = tinhtongdequycacsochan(arr, size);

    cout << "Tong cac so chan trong mang la: " << sumEven << endl;

    return 0;
}