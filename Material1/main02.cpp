#include <iostream>

using namespace std;

int main() {
    const int TAMANHO = 20;
    double notas[TAMANHO], soma = 0, media;
    int acimaDaMedia = 0;

    cout << "Digite as notas dos " << TAMANHO << " alunos:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        soma = soma + notas[i];
    }

    media = soma / TAMANHO;

    for (int i = 0; i < TAMANHO; i++) {
        if (notas[i] > media) {
            acimaDaMedia++;
        }
    }

    cout << "\nMédia da turma: " << media << endl;
    cout << "Alunos com nota acima da média: " << acimaDaMedia << endl;

    return 0;
}
