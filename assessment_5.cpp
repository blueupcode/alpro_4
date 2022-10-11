#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int n;

  // Mengambil input
  cout << "Masukkan jumlah ayam: ";
  cin >> n;
  cout << "======================" << endl;
  
  cout << "Anak ayam turunlah " << n << endl;

  // Melakukan perulangan sesuai dengan input
  for (int i = n - 1; i > 1; i--) {
    cout << "Mati satu tinggallah " << i << endl;
  }

  cout << "Mati satu tinggal induknya " << endl;
  
  return 0;
}