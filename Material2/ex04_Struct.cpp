#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Estudante {
    string nome;
    float notaFinal;
    string status;
};

int main() {
    vector<Estudante> estudantes;

    while (continuar == 's' || continuar == 'S') {
        Estudante e;

        cout << "Digite o nome do estudante: ";
        getline(cin, e.nome);

        cout << "Digite a nota final do estudante: ";
        cin >> e.notaFinal;

        if (e.notaFinal >= 6.0) {
            e.status = "Aprovado";
        } else {
            e.status = "Reprovado";
        }

        estudantes.push_back(e);
        cout << "Deseja cadastrar outro estudante? (s/n): ";
        cin >> continuar;
        cin.ignore();

        cout << endl;
    }

    cout << "ESTUDANTES: " << endl;
    for (int i = 0; i < estudantes.size(); i++) {
        cout << "Estudante " << i + 1 << ":\n";
        cout << "Nome: " << estudantes[i].nome << endl;
        cout << "Nota final: " << estudantes[i].notaFinal << endl;
        cout << "Status: " << estudantes[i].status << endl;
        cout << "-----------------------------" << endl;
    }
}
