#include <iostream>
#include "clock.cpp"

using namespace std;

int main(int argc, char const *argv[]) {
  Clock t;
  int jamInput = 0, menitInput = 0, detikInput = 0;
  cout << "Jam : ";
  cin >> jamInput;
  cout << endl;
  cout << "Menit : ";
  cin >> menitInput;
  cout << endl;
  cout << "Detik : ";
  cin >> detikInput;
  cout << endl;

  t.setWaktu(jamInput, menitInput, detikInput);
  cout << endl << t.getJam() << ":" << t.getMenit() << ":" << t.getDetik() << endl;
  return 0;
}