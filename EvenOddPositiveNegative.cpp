#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    cout << (a % 2 == 0) + (b % 2 == 0) + (c % 2 == 0) + (d % 2 == 0) + (e % 2 == 0)
         << " valor(es) par(es)" << endl;
    cout << (a % 2 != 0) + (b % 2 != 0) + (c % 2 != 0) + (d % 2 != 0) + (e % 2 != 0)
         << " valor(es) impar(es)" << endl;
    cout << (a > 0) + (b > 0) + (c > 0) + (d > 0) + (e > 0)
         << " valor(es) positivo(s)" << endl;
    cout << (a < 0) + (b < 0) + (c < 0) + (d < 0) + (e < 0)
         << " valor(es) negativo(s)" << endl;

}
