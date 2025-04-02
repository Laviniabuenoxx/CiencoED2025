#include <iostream>

using namespace std;

int main()
{
    float horasTrabalhadas,salMin, salReceber;
    float numHoras, salBruto, imposto;

    cout << "Informe as horas trabalhadas: " << endl;
    cin >> numHoras;

    cout << "Informe o salario minimo:" << endl;
    cin >> salMin;

    horasTrabalhadas = salMin /2;

    salBruto = numHoras * horasTrabalhadas;

    imposto = salBruto * 3/100;

    salReceber = salBruto - imposto;

    cout << "Salario Bruto: " << salBruto << endl;
    cout << "Salario a receber: " << salReceber << endl;





}
