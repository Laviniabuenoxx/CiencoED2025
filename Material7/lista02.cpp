#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    list<string> funcionarios;
    int quantidade;

    cout << "Quantos funcionarios deseja cadastrar? ";
    cin >> quantidade;
    cin.ignore();

    if (quantidade <= 0) {
        cout << "Lista vazia." << endl;
        return 0;
    }

    for (int i = 0; i < quantidade; ++i) {
        string nome;
        cout << "Nome do funcionario " << i + 1 << ": ";
        getline(cin, nome);
        funcionarios.push_back(nome);
    }

    cout << "\nQuantidade de funcionarios cadastrados: " << funcionarios.size() << endl;

    cout << "\bLista na ordem de cadastro:\n";
    for (const string& nome : funcionarios) {
        cout << nome << endl;
    }

    list<string> funcionariosOrdenados = funcionarios;
    funcionariosOrdenados.sort();
    cout << "\nLista em ordem alfabetica:\n";
    for (const string& nome : funcionariosOrdenados) {
        cout << nome << endl;
    }

    cout << "\nLista em ordem reversa:\n";
    for (auto it = funcionarios.rbegin(); it != funcionarios.rend(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
