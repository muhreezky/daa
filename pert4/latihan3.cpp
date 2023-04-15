#include <iostream>

/*
  Buatlah codingan dengan input angka 1 dan 2, print angka yang diinput, lalu doublekan angka print tersebut
*/
using namespace std;

int main()
{
  int angka;

  angka = 1;
  cout << "Angka = " << angka << endl;
  cout << "Hasil Double = " << angka;
  angka *= 2;
  cout << angka << endl;

  angka = 2;
  cout << "Angka = " << angka << endl;
  cout << "Hasil Double = " << angka;
  angka *= 2;
  cout << angka << endl;

  return 0;
}