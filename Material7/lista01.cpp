#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numeros;
    int numero;

    cout << "Informe 5 numeros inteiros:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numero;
        numeros.push_back(numero);
    }

    cout << "Ordem de insercao: ";
    for (int n : numeros) {
        cout << n << " ";
    }

    cout << "Ordem inversa: ";
    for (auto it = numeros.rbegin(); it != numeros.rend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}
