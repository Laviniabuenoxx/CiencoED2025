#include <iostream>

using namespace std;

int main() {
    const int TAMANHO = 20;
    int numeros[TAMANHO];

    cout << "Digite 20 números:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "\nNúmeros na ordem inversa:" << endl;
    for (int i = TAMANHO - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
