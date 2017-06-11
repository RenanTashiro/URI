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
    else
    aux = a;
    a = c;
    c = aux;

    if(a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
    }




}
