#include <iostream>
using namespace std;

// Fungsi untuk cek bilangan prima
bool isPrime(int n) {
  if(n <= 1) return false;
  for(int i = 2; i < n; i++) {
    if(n % i == 0) return false;
  }
  return true;
}

// Fungsi untuk tampil bilangan ganjil
void printOdd(int limit) {
  int sum = 0;
  cout << "Bilangan Ganjil: \n";
  for(int i = 1; i <= limit; i++) {
    if(i % 2 != 0) {
      cout << i << " ";
      sum += i;
    }
  }

  cout << "\nJumlah Bilangan Ganjil: " << sum << endl;
}


// Fungsi untuk tampil bilangan genap
void printEven(int limit) {
  int sum = 0;
  cout << "Bilangan Genap: \n";
  for(int i = 1; i <= limit; i++) {
    if(i % 2 == 0) {
      cout << i << " ";
      sum += i;
    }
  }

  cout << "\nJumlah Bilangan Genap: " << sum << endl;
}

// Fungsi untuk tampil bilangan prima
void printPrime(int limit) {
  cout << "Bilangan Prima: \n";
  for(int i = 2; i <= limit; i++) {
    if(isPrime(i)) {
      cout << i << " ";
    }
  }
}

// Fungsi untuk tampil faktor bilangan
void printFactors(int n) {
  cout << "Faktor dari " << n << ": ";
  for(int i = 1; i <= n; i++) {
    if(n % i == 0) {
      cout << i << " ";
    }
  }
}

int main() {
  int limit;
  cout << "Masukkan batas: ";
  cin >> limit;

  printOdd(limit);
  printEven(limit);
  printPrime(limit);

  printFactors(limit);

  return 0;
}
