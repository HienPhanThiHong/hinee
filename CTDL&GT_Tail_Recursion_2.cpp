#include <iostream>
using namespace std;

int UCLN(int m, int n) {
	int r;
	if (m < n) return UCLN(n, m);
	r = m % n;
	if (r == 0) return n;
	else return UCLN(n, r);
}

int main() {
	int kq, m, n;
	cout << "Nh?p m: ";
	cin >> m;
	cout << "Nh?p n: ";
	cin >> n;
	kq = UCLN(m, n);
	cout << "K?t qu?: " << kq;

}