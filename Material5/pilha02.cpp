#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pilha;
    int numero;

    cout << "Informe números inteiros positivos e 0 para sair:" << endl;

    do {
        cin >> numero;
        if (numero > 0) {
            pilha.push(numero);
        }
    } while (numero != 0);

    cout << "\n Ordem inversa:" << endl;

    while (!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }
    cout << endl;

    return 0;
}
