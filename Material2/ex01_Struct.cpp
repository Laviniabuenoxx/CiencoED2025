#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Paciente {
    string nome;
    int idade;
    string sintoma;
};

int main() {
    vector<Paciente> pacientes;
    char resposta;

    do {
        Paciente p;

        cout << "Digite o nome do paciente: ";
        getline(cin, p.nome);

        cout << "Digite a idade do paciente: ";
        cin >> p.idade;
        cin.ignore();

        cout << "Digite o sintoma do paciente: ";
        getline(cin, p.sintoma);

        pacientes.push_back(p);

        cout << "Deseja adicionar outro paciente? (s/n): ";
        cin >> resposta;
        cin.ignore();
        cout << endl;

    } while (resposta == 's' || resposta == 'S');


    cout << "PACIENTES: " << endl;
    for (int i = 0; i < pacientes.size(); i++) {
        cout << "Paciente " << i + 1 << ":" << endl;
        cout << "Nome: " << pacientes[i].nome << endl;
        cout << "Idade: " << pacientes[i].idade << endl;
        cout << "Sintoma: " << pacientes[i].sintoma << endl;
        cout << "-----------------------------" << endl;
    }
}
