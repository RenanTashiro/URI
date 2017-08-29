/*
Nome:      Tipos de Triângulos
ID:        1045
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   834 Bytes
Submissao: 07/01/15 12:59:13
*/
#include <iostream>
using namespace std;

int main()
{
    double a, b, c, aux;
    cin >> a >> b >> c;

    if(b > a && b > c){
    aux = a;
    a = b;
    b = aux;
    }

    else if(c > a && c > b){
    aux = a;
    a = c;
    c = aux;
    }


    if(b + c <= a ){
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else{
    if(a * a == b * b + c * c){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    if(a * a > b * b + c * c){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if(a * a < b * b + c * c){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if(a == b && a == c){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    if((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
        cout << "TRIANGULO ISOSCELES" << endl;
    }
}
