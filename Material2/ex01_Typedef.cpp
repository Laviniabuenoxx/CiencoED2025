#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct Pessoa{
    string nome;
    string endereco;
    string cpf;
    int idade;
};

int main() {
    vector<Pessoa> pessoas;
    int quantidade = 1;

    for (int i = 0; i < quantidade; i++) {
        Pessoa p;
        cout << "Pessoa " << i + 1 << ":" << endl;

        cout << "Nome: ";
        getline(cin, p.nome);

        cout << "Endereco: ";
        getline(cin, p.endereco);

        cout << "CPF: ";
        getline(cin, p.cpf);

        cout << "Idade: ";
        cin >> p.idade;
        cin.ignore();

        pessoas.push_back(p);
        cout << endl;
    }

    cout << "\nDados das pessoas: " << endl;
    for (size_t i = 0; i < pessoas.size(); i++) {
        cout << "\nPessoa " << i + 1 << ":" << endl;
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "Endereco: " << pessoas[i].endereco << endl;
        cout << "CPF: " << pessoas[i].cpf << endl;
        cout << "Idade: " << pessoas[i].idade << endl;
    }
}
