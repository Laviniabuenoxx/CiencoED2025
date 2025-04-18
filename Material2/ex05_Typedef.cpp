#include <iostream>

using namespace std;

enum Cores {
    VERMELHO,
    VERDE,
    AZUL
};

typedef Cores TipoCor;

int main() {
    TipoCor corEscolhida;
    int escolha;

    cout << "Escolha uma cor:" << endl;
    cout << "0 - Vermelho" << endl;
    cout << "1 - Verde" << endl;
    cout << "2 - Azul" << endl;
    cout << "Informe o número: ";
    cin >> escolha;

    if (escolha >= 0 && escolha <= 2) {
        corEscolhida = static_cast<TipoCor>(escolha);

        cout << "Você escolheu: ";
        switch (corEscolhida) {
            case VERMELHO:
                cout << "Vermelho" << endl;
                break;
            case VERDE:
                cout << "Verde" << endl;
                break;
            case AZUL:
                cout << "Azul" << endl;
                break;
        }
    } else {
        cout << "Escolha inválida!" << endl;
    }
}
