#include <iostream>
using namespace std;

int main() {
    const int TAM = 10;
    int vetor[TAM];

    cout << "Informe 10 números:" << endl;
    for (int i = 0; i < TAM; i++) {
        cin >> vetor[i];
    }

    for (int i = 1; i < TAM; i++) {
        int aux = vetor[i];
        int j = i - 1;
        while (j >= 0 && vetor[j] > aux) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = aux;
    }

    int menor = vetor[0];
    int contMenor = 1;
    for (int i = 1; i < TAM; i++) {
        if (vetor[i] == menor) {
            contMenor++;
        } else {
            break;
        }
    }

    int maior = vetor[TAM - 1];
    int contMaior = 1;
    for (int i = TAM - 2; i >= 0; i--) {
        if (vetor[i] == maior) {
            contMaior++;
        } else {
            break;
        }
    }

    cout << "Vetor ordenado: ";
    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    cout << "Menor número: " << menor << ", aparece " << contMenor << " vez(es)." << endl;
    cout << "Maior número: " << maior << ", aparece " << contMaior << " vez(es)." << endl;

    return 0;
}
