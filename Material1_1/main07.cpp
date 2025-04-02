#include <iostream>

using namespace std;

int main() {
    const int tamanho = 10;
    int vetor[tamanho];
    int *ptr = vetor;

    cout << "Informe 10 valores:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> *(ptr + i);
    }
    cout << "\Numeros ordem normal:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    cout << "\Numero ordem inversa:" << endl;
    for (int i = tamanho - 1; i >= 0; i--) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}
