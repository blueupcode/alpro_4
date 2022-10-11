#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int input;
  int genap = 0;
  int ganjil = 0;
  int positif = 0;
  int negatif = 0;

  // Melakukan perulangan hingga input -999
  do {
    // Mengambil input
    cin >> input;

    // Mengecek apakah input tersebut bukan -999
    if (input != -999) {

      // Menentukan bilangan genap atau ganjil
      if (input % 2 == 0) {
        genap++;
      } else {
        ganjil++;
      }

      // Menentukan bilangan positif atau negatif
      if (input > 0) {
        positif++;
      } else if (input < 0) {
        negatif++;
      }
    }
  } while (input != -999);

  // Menampilkan hasil
  cout << "Bilangan genap ada " << genap << endl;
  cout << "Bilangan ganjil ada " << ganjil << endl;
  cout << "Bilangan positif ada " << positif << endl;
  cout << "Bilangan negatif ada " << negatif << endl;

  return 0;
}