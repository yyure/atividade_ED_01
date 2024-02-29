/*

Calculo IMC

Este programa recebe a massa e altura de uma pessoa, calcula seu IMC
e encontra sua classificação de peso com base no índice.

Exemplos:

>>> 65
>>> 1.70
<<< Classificação: Peso normal

>>> 120
>>> 1.85
<<< Classificação: Acima do peso

*/


#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

string classificaIMC(float massa, float altura) {
    float imc = massa / (altura * altura);
    
    if (imc < 17) {
        return "Muito abaixo do peso";
    }
    else if (imc < 18.5) {
        return "Abaixo do peso";
    }
    else if (imc < 25) {
        return "Peso normal";
    }
    else if (imc < 30) {
        return "Acima do peso";
    }
    else if (imc < 35) {
        return "Obesidade";
    }
    else if (imc < 40) {
        return "Obesidade severa";
    }
    else {
        return "Obesidade mórbida";
    }
}

int main()
{
    float massa, altura;
    
    cout << "Insira a massa (kg): " << endl;
    cin >> massa;
    
    cout << "Insira a altura (m): " << endl;
    cin >> altura;
    
    cout << "Classificação: " << classificaIMC(massa, altura) << endl;
    
    return 0;
}