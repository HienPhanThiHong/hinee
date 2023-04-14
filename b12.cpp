#include <iostream>
using namespace std;
void printArray(int arr[], int index, int size) {
    if (index >= size) {
        return;
    }
    cout << arr[index] << " ";
    printArray(arr, index + 1, size);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 999};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, 0, size);
    return 0;
}