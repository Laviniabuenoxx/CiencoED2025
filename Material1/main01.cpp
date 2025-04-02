#include <iostream>
#include <string>

using namespace std;

int main() {
    string nomes[10];
    string nomeBusca;
    bool encontrado = false;

    cout << "Digite 10 nomes:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Nome " << i + 1 << ": ";
        getline(cin, nomes[i]);
    }

    cout << "\nDigite um nome para buscar: ";
    getline(cin, nomeBusca);

    for (int i = 0; i < 10; i++) {
        if (nomes[i] == nomeBusca) {
            encontrado = true;
            break;
        }
    }

    if (encontrado)
        cout << "ACHEI" << endl;
    else
        cout << "NÃO ACHEI" << endl;

    return 0;
}
