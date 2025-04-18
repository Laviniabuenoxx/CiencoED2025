#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Pedido {
    string nomePrato;
    int quantidade;
    float precoTotal;
};

int main() {
    vector<Pedido> pedidos;
    Pedido p;
    char continuar;

    cout << "SISTEMA DE PEDIDOS" << endl;

    while (true) {
        cout << "Deseja adicionar um pedido? (s/n): ";
        cin >> continuar;
        cin.ignore();

        if (continuar == 'n' || continuar == 'N') {
            break;
        }

        cout << "Nome do prato: ";
        getline(cin, p.nomePrato);

        cout << "Quantidade: ";
        cin >> p.quantidade;

        cout << "Preço total: ";
        cin >> p.precoTotal;
        cin.ignore();

        pedidos.push_back(p);
        cout << "Pedido registrado!\n\n";
    }

    cout << "\nPEDIDOS" << endl;
    for (int i = 0; i < pedidos.size(); i++) {
        cout << "Pedido " << i + 1 << ":" << endl;
        cout << "Prato: " << pedidos[i].nomePrato << endl;
        cout << "Quantidade: " << pedidos[i].quantidade << endl;
        cout << "Preço Total: R$ " << pedidos[i].precoTotal << endl;
        cout << "-----------------------------" << endl;
    }
}
