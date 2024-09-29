#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double celcius, fahrenheit, reamur;

  cout << "masukkan suhu dalam celcius: ";
  cin >> celcius;

  fahrenheit = celcius * (9.0 / 5.0) + 32;
  reamur = celcius * 4.0 / 5.0;

  cout << "suhu dalam fahrenheit adalah " << fahrenheit << endl
        << "suhu dalam reamur adalah " << reamur;
        return 0;
}