#include <iostream>
using namespace std;

// Fungsi untuk menampilkan baris bintang
void printStars(int n) {
  // Print spasi
  for(int i = 1; i <= n; i++) {
    cout << " ";
  }

  // Print bintang
  for(int i = 1; i <= (n * 2) - 1; i++) {
    cout << "*";
  }
  cout << endl;
}

// Fungsi untuk menampilkan piramida bintang
void printPyramid(int n) {
  for(int i = n; i >= 1; i--) {
    printStars(i);
  }
}

int main() {
  int n;
  cout << "Masukkan tinggi piramida: ";
  cin >> n;

  printPyramid(n);
  return 0;
}
