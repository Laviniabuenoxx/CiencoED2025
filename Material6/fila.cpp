#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> filaAtendimento;
    int opcao;
    string nomeCliente;

    do {
        cout << "\n===== Sistema de Atendimento ===== \n" << endl;
        cout << "1. Inserir cliente na fila" << endl;
        cout << "2. Atender proximo cliente" << endl;
        cout << "3. Exibir fila de espera" << endl;
        cout << "4. Encerrar o programa" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        cin.ignore();

        switch(opcao) {
            case 1:
                cout << "Digite o nome do cliente: ";
                getline(cin, nomeCliente);
                filaAtendimento.push(nomeCliente);
                cout << "Cliente " << nomeCliente << " adicionado à fila." << endl;
                break;

            case 2:
                if (!filaAtendimento.empty()) {
                    cout << "Atendendo cliente: " << filaAtendimento.front() << endl;
                    filaAtendimento.pop();
                } else {
                    cout << "A fila esta vazia." << endl;
                }
                break;

            case 3:
                if (!filaAtendimento.empty()) {
                    cout << "Clientes na fila de espera:" << endl;
                    queue<string> filaTemp = filaAtendimento;
                    while (!filaTemp.empty()) {
                        cout << "- " << filaTemp.front() << endl;
                        filaTemp.pop();
                    }
                } else {
                    cout << "A fila esta vazia." << endl;
                }
                break;

            case 4:
                cout << "Programa Finalizado" << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 4);

    return 0;
}
