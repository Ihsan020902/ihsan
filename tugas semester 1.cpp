#include <iostream>
#include <cstring> // untuk strcmp
using namespace std;

int main() {
    char A[15]; // gunakan array dengan tanda []
    char B[15];

    cout << "Masukkan kata 1 : ";
    cin >> A;
    cout << "Masukkan kata 2 : ";
    cin >> B;

    if (strcmp(A, B) == 0) {
        cout << "Kata 1 dan 2 sama" << endl;
    } else {
        cout << "Kata 1 dan 2 tidak sama" << endl;
    }

    return 0;
}

