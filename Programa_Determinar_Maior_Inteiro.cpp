/*Escreva um programa que leia 3 números inteiros e mostre o maior deles.*/
/*6o.Programa.09.10.2021.AchaMaior*/

#include <iostream>
using namespace std;

int main (){
    int num1, num2, num3;
    cout << "Escreva tres numeros inteiros e determine o maior dentre eles.\n" << endl;
    cout << "Entre com o primeiro numero inteiro: ";
    cin >> num1;
    cout << "Entre com o segundo numero inteiro: ";
    cin >> num2;
    cout << "Entre com o terceiro numero inteiro: ";
    cin >> num3;
    if (num1 > num2 && num1 > num3)
        cout << "\nO maior numero eh: " << num1;
    else if (num2 > num1 && num2 > num3)
        cout << "\nO maior numero eh: " << num2;
    else if (num3 > num1 && num3 > num2)
        cout << "\nO maior numero eh: " << num3 << endl;
    return 0;
}
