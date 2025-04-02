#include <iostream>

using namespace std;

int main()
{
    float salario, novoSal;

    cout << "Salario atual:" << endl;
    cin >> salario;

    if (salario < 1000){
        novoSal = salario + (salario * 15/100);
    }
    else if (salario <= 1500){
        novoSal = salario + (salario * 10/100);
    }
    else {
        novoSal = salario + (salario * 05/100) ;
    }

    cout << "O novo salario é: " << novoSal << endl;
}
