/*
Nome:      Aumento de Salário
ID:        1048
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   822 Bytes
Submissao: 06/01/15 18:52:57
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float salario, novo_salario;
    cin >> salario;

if(salario <= 400)
    novo_salario = salario * 1.15;
if(salario <= 800 && salario > 400)
    novo_salario = salario * 1.12;
if(salario <= 1200 && salario > 800)
    novo_salario = salario * 1.10;
if(salario <= 2000 && salario > 1200)
    novo_salario = salario * 1.07;
if(salario > 2000)
    novo_salario = salario * 1.04;

    cout << setiosflags(ios::fixed) << setprecision(2) << "Novo salario: " << novo_salario << endl;
    cout << setiosflags(ios::fixed) << setprecision(2) << "Reajuste ganho: " << novo_salario - salario << endl;
    cout << setiosflags(ios::fixed) << setprecision(0) << "Em percentual: " << novo_salario / salario * 100 - 100 << " %" << endl;
}
