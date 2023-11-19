#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Masukkan banyak elemen bilangan : ";
    cin >> n;

    int a = 0; // Bilangan pertama dalam elemen bilangan
    int b = 1; // Bilangan kedua dalam elemen bilangan

    cout << "elemen bilangan dengan " << n << " bilangan: ";

    for (int i = 0; i < n; i++) {
        cout << a << " ";

        int next = a + b;
        a = b;
        b = next;
    }

    cout << endl;

    return 0;
}
