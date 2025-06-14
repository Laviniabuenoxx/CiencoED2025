#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> pilha;
    int opcao, elemento;

    do {
        cout << "\n===== Menu =====\n" << endl;
        cout << "1. Inserir um elemento na pilha" << endl;
        cout << "2. Remover o elemento do topo da pilha" << endl;
        cout << "3. Verificar o elemento do topo da pilha" << endl;
        cout << "4. Verificar se a pilha esta vazia" << endl;
        cout << "5. Exibir o tamanho da pilha" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Digite o elemento a ser inserido: ";
                cin >> elemento;
                pilha.push(elemento);
                cout << "Elemento " << elemento << " inserido na pilha." << endl;
                break;

            case 2:
                if (!pilha.empty()) {
                    cout << "Elemento " << pilha.top() << " removido da pilha." << endl;
                    pilha.pop();
                } else {
                    cout << "A pilha esta vazia. Nao ha elementos para remover." << endl;
                }
                break;

            case 3:
                if (!pilha.empty()) {
                    cout << "Elemento no topo da pilha: " << pilha.top() << endl;
                } else {
                    cout << "A pilha esta vazia." << endl;
                }
                break;

            case 4:
                if (pilha.empty()) {
                    cout << "A pilha esta vazia." << endl;
                } else {
                    cout << "A pilha NAO esta vazia." << endl;
                }
                break;

            case 5:
                cout << "Tamanho da pilha: " << pilha.size() << endl;
                break;

            case 0:
                cout << "Programa finalizado" << endl;
                break;

            default:
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
        }
    } while(opcao != 0);

    return 0;
}
