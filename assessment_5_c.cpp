#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int n, i;

  // Mengambil input
  cout << "Masukkan jumlah ayam: ";
  cin >> n;
  cout << "======================" << endl;
  
  cout << "Anak ayam turunlah " << n << endl;

  // Deklarasi index perulangan
  i = n - 1;
  
  // Melakukan perulangan sesuai dengan input
  do {
    cout << "Mati satu tinggallah " << i << endl;
    
    // Mengurangi index    
    i--;
  } while (i > 1);

  cout << "Mati satu tinggal induknya " << endl;
  
  return 0;
}