#include <iostream>
#include <string>


using namespace std;

struct Livro {
    string titulo;
    string autor;
    int anoPublicacao;
};

int main() {
    Livro livros[100];
    int quantidade = 0;
    string tituloParada = "Sair";

    while (true) {
        Livro l;

        cout << "Digite o título do livro (ou digite: " << tituloParada << "): ";
        getline(cin, l.titulo);

        if (l.titulo == tituloParada) {
            break;
        }

        cout << "Digite o nome do autor: ";
        getline(cin, l.autor);

        cout << "Digite o ano de publicação: ";
        cin >> l.anoPublicacao;
        cin.ignore();

        livros[quantidade] = l;
        quantidade++;

        cout << endl;
    }

    cout << "LIVROS: " << endl;
    for (int i = 0; i < quantidade; i++) {
        cout << "Livro " << i + 1 << ":" << endl;
        cout << "Título: " << livros[i].titulo << endl;
        cout << "Autor: " << livros[i].autor << endl;
        cout << "Ano de publicação: " << livros[i].anoPublicacao << endl;
        cout << "-----------------------------" << endl;
    }
}
