#include <iostream>

using namespace std;

int main() {
    const int TAMANHO = 10;
    int A[TAMANHO], M[TAMANHO], X;

    cout << "Digite 10 números para o vetor A:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "\nDigite um número X: ";
    cin >> X;

    for (int i = 0; i < TAMANHO; i++) {
        M[i] = A[i] * X;
    }

    cout << "\nVetor M:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "M[" << i << "]: " << M[i] << endl;
    }

    return 0;
}
