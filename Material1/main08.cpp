#include <iostream>

using namespace std;

int main() {
    const int tamanho = 5;
    int vetor[tamanho];
    int *ptr = vetor;
    int soma = 0;

    cout << "Digite 5 valores inteiros:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    for (int i = 0; i < tamanho; i++) {
        soma = soma + *(ptr + i);
    }

    double media = soma / tamanho;


    cout << "\nA média dos valores digitados e: " << media << endl;

    return 0;
}
