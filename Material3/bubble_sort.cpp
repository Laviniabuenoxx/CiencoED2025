#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int vetor[n];

    cout << "Informe os elementos:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] < vetor[j + 1]) {

                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    cout << "Vetor decrescente:" << endl;
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
