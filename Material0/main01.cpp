#include <iostream>

using namespace std;

int main()
{
    float peso, altura, IMC;

    cout << "Informe o seu peso: ";
    cin >> peso;

    cout << "Informe sua altura: ";
    cin >> altura;

    IMC = peso / (altura * altura);

    if (IMC < 20){
        cout << "Você está abaixo do peso";
    }
    else if(IMC >=20 && IMC < 25){
        cout << "Você está no peso ideal";
    }
    else{
        cout << "Você está acima do peso";
    }

}
