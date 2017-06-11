#include <iostream>
using namespace std;

int main()
{
    int D1, D2, D3, d1, d2, d3, d4, d5, d6, d7, d8, d9, b1, b2,
        b1_total, b2_total;
    char dot;

    while(cin >> D1 >> dot >> D2 >> dot >> D3 >> dot >> b1 >> b2){

    d1 = D1 / 100;
    d2 = D1 % 100 / 10;
    d3 = D1 % 10;
    d4 = D2 / 100;
    d5 = D2 % 100 / 10;
    d6 = D2 % 10;
    d7 = D3 / 100;
    d8 = D3 % 100 / 10;
    d9 = D3 % 10;

    cout << d1 << d2 << d3;
        b1_total = (d1 + d2 * 2 + d3 * 3 + d4 * 4 + d5 * 5
                    + d6 * 6 + d7 * 7 + d8 * 8 + d9 * 9) % 11;
        b2_total = (d1 * 9 + d2 * 8 + d3 * 7 + d4 * 6 + d5 * 5
                    + d6 * 4 + d7 * 3 + d8 * 2 + d9) % 11;

        if(b1_total == b1 && b2_total == b2)
            cout << "CPF valido\n";
        else
            cout << "CPF invalido\n";
    }
}
