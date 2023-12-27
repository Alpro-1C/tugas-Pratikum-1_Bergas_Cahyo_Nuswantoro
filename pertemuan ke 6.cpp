#include <iostream>
using namespace std;

int main() {
  int angka[5];

  // mengisi nilai array
  for(int i = 0; i < 5; i++) {
    angka[i] = i + 1;
  }

  // mencetak nilai array
  for(int i = 0; i < 5; i++) {
    cout << angka[i] << endl;
  }

  return 0;
}
