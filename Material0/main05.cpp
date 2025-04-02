#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    double precoEtiqueta, precoFinal;
    int codigoPag;


    cout << "Informe o preço de etiqueta:";
    cin >> precoEtiqueta;

    cout << "Informe o codigo da condição de pagaento:" << endl;
    cout << "1 - A vista em dinheiro, com 10% de desconto." << endl;
    cout << "2 - A vista com cartão de credito, com 5% de desconto." << endl;
    cout << "3 - Em 2x, preço normal de etiqueta sem juros." << endl;
    cout << "4 - Em 3x, preço de etiqueta com acréscimo de 10%." << endl;
    cout << ".................................................." << endl;
    cin >> codigoPag;

    switch (codigoPag) {
    case 1:
        precoFinal = precoEtiqueta * 0.90;
        cout << "A vista em dinheiro ou cheque.";
        break;
    case 2:
        precoFinal = precoEtiqueta * 0.95;
        cout << "A vista com cartão de crédito";
        break;
    case 3:
        precoFinal = precoEtiqueta;
        cout << "Em 2x, sem juros";
        break;
    case 4:
        precoFinal = precoEtiqueta * 1.10;
        cout << "Em 3x, com acréscimo";
        break;
    default:
        cout << "Codigo invalido";


    }


    cout << "Valor a pagar: " << precoFinal << endl;

}
