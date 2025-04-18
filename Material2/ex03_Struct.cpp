#include <iostream>
#include <string>
using namespace std;

struct Filme {
    string titulo;
    float enredo;
    float atuacao;
    float efeitosEspeciais;
    float media;
};

int main() {
    Filme filmes[100];
    int quantidade = 0;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        Filme f;
        cout << "Digite o título do filme: ";
        getline(cin, f.titulo);

        cout << "Avalie o enredo (0 a 10): ";
        cin >> f.enredo;

        cout << "Avalie a atuação (0 a 10): ";
        cin >> f.atuacao;

        cout << "Avalie os efeitos especiais (0 a 10): ";
        cin >> f.efeitosEspeciais;

        f.media = (f.enredo + f.atuacao + f.efeitosEspeciais) / 3.0;

        filmes[quantidade] = f;
        quantidade++;

        cout << "Deseja avaliar outro filme? (s/n): ";
        cin >> continuar;
        cin.ignore();
        cout << endl;
    }

    cout << "FILMES: " << endl;
    for (int i = 0; i < quantidade; i++) {
        cout << "Filme " << i + 1 << ":\n";
        cout << "Título: " << filmes[i].titulo << endl;
        cout << "Enredo: " << filmes[i].enredo << endl;
        cout << "Atuação: " << filmes[i].atuacao << endl;
        cout << "Efeitos Especiais: " << filmes[i].efeitosEspeciais << endl;
        cout << "Média: " << filmes[i].media << endl;
        cout << "-----------------------------" << endl;
    }

    return 0;
}
