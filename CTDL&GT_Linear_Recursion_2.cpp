https://freetuts.net/de-quy-tuyen-tinh-2946.html
//chuong trình này duoc dang tai Freetuts.net
#include <iostream>
using namespace std;
 
//hàm de quy tuyên tính
int factorial(int n){
  if(n == 0) return 1; // di?m d?ng c?a hàm, n?u n == 0 thì kêt thúc hàm và tro ve 1
  return n * factorial(n-1);
}
//hàm main
int main() {
  int n;
  cout<<"Nhap vào so giai thua ban muon tính: ";
  cin>>n;
  int kq = factorial(n);//goi hàm factorial() de tính giai thua cho n và gán ket qua vào bien kq
  cout<<"\nKet qua \n"<<n<<"! = "<<kq;
}