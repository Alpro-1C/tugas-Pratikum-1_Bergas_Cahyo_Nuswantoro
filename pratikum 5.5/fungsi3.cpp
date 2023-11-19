#include <iostream>
using namespace std;

// Fungsi untuk menghitung Fibonacci ke-n
int fibonacci(int n) {
  if(n <= 1) return n;
  return fibonacci(n-1) + fibonacci(n-2);
}

// Fungsi untuk mencetak deret Fibonacci 1 sampai n
void printFibonacci(int n) {
  for(int i = 1; i <= n; i++) {
    cout << fibonacci(i) << " ";
  }
}

int main() {
  int n;
  cout << "Masukkan jumlah angka Fibonacci: ";
  cin >> n;

  cout << "Deret Fibonacci: ";
  printFibonacci(n);

  return 0;
}
