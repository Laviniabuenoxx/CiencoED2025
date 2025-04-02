#include <iostream>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "");

    for (int i = 1; i <= 20; i++) {

        cout << "O quadrado de " << i << " é " << i * i << endl;
    }

    return 0;
}
