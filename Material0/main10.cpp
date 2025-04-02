#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int idade, opiniao;
    int totalPessoas = 0, somaIdades = 0;
    int contagemOtimo = 0, contagemBom = 0, contagemRegular = 0, contagemRuim = 0;

    while (true) {
        cout << "Digite a idade ou um valor negativo para encerrar sair: " << endl;
        cin >> idade;

        if (idade < 0) {
            break;
        }

        cout << "Informe a opinião sobre o filme (1 - Otimo, 2 - Bom, 3 - Regular, 4 - Ruim):" << endl;
        cin >> opiniao;

        totalPessoas++;
        somaIdades += idade;

        switch(opiniao) {
            case 1:
                contagemOtimo++;
                break;
            case 2:
                contagemBom++;
                break;
            case 3:
                contagemRegular++;
                break;
            case 4:
                contagemRuim++;
                break;
            default:
                cout << "Opinião inválida";
                totalPessoas--;
                somaIdades -= idade;
                break;
        }
    }

    if (totalPessoas > 0) {
        double mediaIdade = static_cast<double>(somaIdades) / totalPessoas;
        double percOtimo = (static_cast<double>(contagemOtimo) / totalPessoas) * 100;
        double percBom = (static_cast<double>(contagemBom) / totalPessoas) * 100;
        double percRegular = (static_cast<double>(contagemRegular) / totalPessoas) * 100;
        double percRuim = (static_cast<double>(contagemRuim) / totalPessoas) * 100;

        cout << "Quantidade de pessoas que responderam: " << totalPessoas << endl;
        cout << "Média de idade: " << mediaIdade << endl;
        cout << "Porcentagem de respostas:" << endl;
        cout << "Ótimo: " << percOtimo << "%" << endl;
        cout << "Bom: " << percBom << "%" << endl;
        cout << "Regular: " << percRegular << "%" << endl;
        cout << "Ruim: " << percRuim << "%" << endl;
    } else {
        cout << "Nenhuma pessoa respondeu à pesquisa." << endl;
    }

    return 0;
}
