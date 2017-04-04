#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n], y[n], i = 0, vezes, soma;

    while(i < n){

    cin >> x[i] >> y[i];

        soma = 0;
        vezes = 0;
        while(vezes < y[i]){

            if(x[i] % 2 == 1 || x[i] % 2 == -1){
                soma += x[i];
                vezes++;
        }
        x[i] += 1;
        }
         cout << soma << endl;
         i++;
    }
}
