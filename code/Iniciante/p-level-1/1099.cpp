/*
Nome:      Soma de Ímpares Consecutivos II
ID:        1099
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   527 Bytes
Submissao: 09/01/15 21:57:51
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n], y[n], aux, total;

    for(int z = 0; z < n; z++){

        cin >> x[z] >> y[z];

        if(x[z] > y[z]){
            aux = x[z];
            x[z] = y[z];
            y[z] = aux;
        }
        total = 0;
        x[z]++;
        while(x[z] < y[z]){

            if(x[z] % 2 == 1 || x[z] % 2 == -1)
            total += x[z];

            x[z]++;
        }
        cout << total << endl;
    }


}
