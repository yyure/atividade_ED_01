/*

Anos Bissextos

Este programa verifica se um ano é bissexto ou não.

Exemplos:

>>> 2024
<<< O ano 2024 é bissexto.

>>> 2100
<<< O ano 2100 não é bissexto.

>>> 1600
<<< O ano 1600 é bissexto.

*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool verificaBissexto(int ano) {
    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int main() {
    int ano;
    
    cout << "Insira o ano: " << endl;
    cin >> ano;
    
    if (verificaBissexto(ano)) {
        cout << "O ano " << ano << " é bissexto." << endl;
    } else {
        cout << "O ano " << ano << " não é bissexto." << endl;
    }

    return 0;
}