#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned int long long H, O, resultado;

    while(cin >> H >> O){
    if(H > O)
    resultado = H - O;
    else
    resultado = O - H;
    cout << resultado << endl;

    }
}
