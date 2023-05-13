#include <iostream>

using namespace std;

int main() {
  int pil, c;
  char back;
  int a = 10;
  int b = 10;

  kurang:
    c = a - b;
    cout << c << endl;

  do {
    cout << "0. Exit" << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "Input pilihan : ";
    cin >> pil;
    switch (pil) {
      case 0:
        cout << "exit";
        break;
      case 1:
        c = a + b;
        cout << c << endl;
        break;
      case 2:
        goto kurang;
      default:
        cout << "Pilihan salah" << endl;
        break;
    }
    cout << "Pilih kembali?" << endl;
    cin >> back;
  } while (back != 't');
  cout << "thanks" << endl;

  return 0;
}