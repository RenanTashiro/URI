#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
  int Numero, total = 0, divisor = 0;
  double resultado;
  string Nome;

    while(getline(cin,Nome), cin >> Numero){

    getchar();

    total += Numero;
    divisor++;
    fflush(stdin);
    }
    resultado = (float) total / divisor;
    cout << setiosflags(ios::fixed) << setprecision(1) << resultado << endl;
}
