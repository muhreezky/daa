#include <iostream>

/* Buatlah Codingan Inputnya jumlah beli dan bayar, print kembaliannya */
using namespace std;

int main () 
{
  int harga, bayar, kembalian;
  string inputan;
  
  cout << "Masukkan Harga = ";
  cin >> harga;

  cout << "Masukkan Bayaran = ";
  cin >> bayar;
  cout << endl;

  kembalian = bayar - harga;

  cout << "Kembalian = " << kembalian << endl;

  return 0;
}