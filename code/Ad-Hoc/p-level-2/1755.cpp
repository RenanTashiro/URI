/*
Nome:      O Troco
ID:        1755
Resposta:  Accepted
Linguagem: C++
Tempo:     0.260s
Tamanho:   651 Bytes
Submissao: 19/05/15 13:54:34
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T, D, N;
    double price, cost, rem = 0;
    cin >> T;

    for(int i = 0; i < T; i++){

        cin >> D >> N;

        for(int l = 0; l < N; l++){

            cin >> cost;

            price = D;
				
			if( price > cost ){ 
                while(price > 0)
                    price -= cost;
                if(price < 0)
                    price += cost;

                if(rem < price)
                    rem = price;
			}
        }

    cout << setiosflags(ios::fixed) << setprecision(2) << rem << endl;
    rem = 0;
    }
}