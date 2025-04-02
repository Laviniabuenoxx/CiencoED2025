#include <iostream>
#include <limits>

using namespace std;

int main() {
    int numAluno, alunoMaisAlto, alunoMaisBaixo;
    float altura, maiorAltura = numeric_limits<float>::lowest(), menorAltura = numeric_limits<float>::max();

    cout << "Digite o numero do aluno e a altura (em cm) para 10 alunos:\n";

    for (int i = 0; i < 10; i++) {
        cout << "Aluno " << (i + 1) << ": ";
        cin >> numAluno >> altura;

        if (altura > maiorAltura) {
            maiorAltura = altura;
            alunoMaisAlto = numAluno;
        }

        if (altura < menorAltura) {
            menorAltura = altura;
            alunoMaisBaixo = numAluno;
        }
    }

    cout << "\nAluno mais alto: " << alunoMaisAlto << " com " << maiorAltura << " cm" << endl;
    cout << "Aluno mais baixo: " << alunoMaisBaixo << " com " << menorAltura << " cm" << endl;

    return 0;
}
