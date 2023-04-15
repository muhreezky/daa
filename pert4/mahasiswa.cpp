#include <iostream>

using namespace std;

/*
  Buatlah inputan nama dan nim
 */

int main()
{
  string nama;
  string nim;

  cout << "Masukkan Nama : ";
  cin >> nama;

  cout << "Masukkan NIM : ";
  cin >> nim;

  cout << "\nNama : " << nama << "\nNIM : " << nim << "\n"
       << endl;
  return 0;
}