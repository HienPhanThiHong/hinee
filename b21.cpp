#include <iostream>
using namespace std;

int T(int n) {
    if (n == 1) // dieu kien dung cua de quy
        return 1;
    return n * T(n - 1); // goi lai ham de quy voi tham so n - 1
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "T(" << n << ") = " << T(n) << endl;
    return 0;
}