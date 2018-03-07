/*
Nome:      Vampiros
ID:        1093
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.032s
Tamanho:   589 Bytes
Submissao: 10/06/17 09:16:26
*/
// gambler's ruins
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    double ev1, ev2, at, d;
    double p1, p2, prob;

    while(cin >> ev1 >> ev2 >> at >> d && ev1) 
    {
		ev1 = ceil(ev1 / d);
		ev2 = ceil(ev2 / d);

        if(at == 3)
        {	
            prob = (ev1 / (ev1 + ev2));
		}
        else
        {
            p1 = at / 6;
            p2 = (6 - at) / 6;

            prob = (1 - pow((p2 / p1), ev1)) / (1 - pow((p2 / p1), ev1 + ev2));
		}

		cout << fixed << setprecision(1) << 100.0 * prob << endl;
    }

    return 0;
}
