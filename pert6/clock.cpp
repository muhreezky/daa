#include <iostream>
using namespace std;

class Clock
{
  public:
    Clock(int jam = 0, int menit = 0, int detik = 0);
    void setWaktu(int jamInput, int menitInput, int detik);
    int getJam();
    int getMenit();
    int getDetik();
    void displayJam();
    void tambahJam();
    void tambahMenit();
    void tambahDetik();

  private:
    int jam, menit, detik;
};

Clock::Clock(int jam, int menit, int detik)
{
  setWaktu(jam, menit, detik);
}

void Clock::setWaktu(int jamInput, int menitInput, int detikInput)
{
  if ((jamInput >= 0 && jamInput < 24) && (menitInput >= 0 && menitInput < 60) && (detikInput >= 0 && detikInput < 60))
  {
    jam = jamInput;
    menit = menitInput;
    detik = detikInput;
  }
  else
  {
    cout << "Format waktu salah" << endl;
  }
}

int Clock::getJam() {
  return jam;
}

int Clock::getMenit() {
  return menit;
}

int Clock::getDetik() {
  return detik;
}

void Clock::displayJam() {
  cout << jam << ":" << menit << ":" << detik << endl;
}

void Clock::tambahJam() {
  jam ++;
}

void Clock::tambahMenit(){
  menit ++;
}

void Clock::tambahDetik() {
  detik ++;
}