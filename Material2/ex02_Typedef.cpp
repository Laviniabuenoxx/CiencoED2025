#include <iostream>
#include <string>

using namespace std;

struct Animal {
    string nome;
    string especie;
    int idade;
    float peso;
};

typedef Animal ListaAnimais[10];

int main() {
    ListaAnimais animais;

    for (int i = 0; i < 10; ++i) {
        cout << "Digite os dados do animal " << i + 1 << endl;

        cout << "Nome: ";
        getline(cin, animais[i].nome);

        cout << "Espécie: ";
        getline(cin, animais[i].especie);

        cout << "Idade: ";
        cin >> animais[i].idade;

        cout << "Peso: ";
        cin >> animais[i].peso;
        cin.ignore();
        cout << endl;
    }

    cout << "Dados dos animais:" << endl;
    for (int i = 0; i < 1; ++i) {
        cout << "Animal " << i + 1 << ":" << endl;
        cout << "Nome: " << animais[i].nome << endl;
        cout << "Espécie: " << animais[i].especie << endl;
        cout << "Idade: " << animais[i].idade << " anos" << endl;
        cout << "Peso: " << animais[i].peso << " kg" << endl;
        cout << endl;
    }
}
