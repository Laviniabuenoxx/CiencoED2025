#include <iostream>
#include <string>

using namespace std;

struct Endereco {
    string rua;
    string cidade;
    string cep;
};

typedef Endereco TipoEndereco;

int main() {
    TipoEndereco endereco;

    cout << "Digite o nome da rua: ";
    getline(cin, endereco.rua);

    cout << "Digite a cidade: ";
    getline(cin, endereco.cidade);

    cout << "Digite o CEP: ";
    getline(cin, endereco.cep);

    cout << "\nInformações do Endereço:" << endl;
    cout << "Rua: " << endereco.rua << endl;
    cout << "Cidade: " << endereco.cidade << endl;
    cout << "CEP: " << endereco.cep << endl;

}
