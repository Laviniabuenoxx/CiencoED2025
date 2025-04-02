#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int voto;
    int votosCandUm = 0, votosCandDois = 0;
    int votosNulos = 0, votosBrancos = 0, totalVotos = 0;

    cout << "Informe 1 ou 2 para candidatos, 3 para nulo, 4 para branco, 0 para sair:" << endl;

    while (true) {
        cin >> voto;
        if (voto == 0) {
            break;
        }

        switch (voto) {
            case 1:
                votosCandUm++;
                break;
            case 2:
                votosCandDois++;
                break;
            case 3:
                votosNulos++;
                break;
            case 4:
                votosBrancos++;
                break;
            default:
                cout << "Voto invalido";
        }
        totalVotos++;
    }

    if (totalVotos == 0) {
        cout << "Nenhum voto foi informado." << endl;
    } else {
        cout << fixed << setprecision(2);
        cout << "Votos para o candidato 1: " << (votosCandUm * 100.0 / totalVotos) << "%\n";
        cout << "Votos para o candidato 2: " << (votosCandDois * 100.0 / totalVotos) << "%\n";
        cout << "Votos nulos: " << (votosNulos * 100.0 / totalVotos) << "%\n";
        cout << "Votos em branco: " << (votosBrancos * 100.0 / totalVotos) << "%\n";
    }

    return 0;
}
