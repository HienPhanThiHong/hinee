https://freetuts.net/de-quy-tuyen-tinh-2946.html
//chuong tr�nh n�y duoc dang tai Freetuts.net
#include <iostream>
using namespace std;
 
//h�m de quy tuy�n t�nh
int factorial(int n){
  if(n == 0) return 1; // di?m d?ng c?a h�m, n?u n == 0 th� k�t th�c h�m v� tro ve 1
  return n * factorial(n-1);
}
//h�m main
int main() {
  int n;
  cout<<"Nhap v�o so giai thua ban muon t�nh: ";
  cin>>n;
  int kq = factorial(n);//goi h�m factorial() de t�nh giai thua cho n v� g�n ket qua v�o bien kq
  cout<<"\nKet qua \n"<<n<<"! = "<<kq;
}