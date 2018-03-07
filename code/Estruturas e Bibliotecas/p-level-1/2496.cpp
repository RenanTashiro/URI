/*
Nome:      A Única Chance
ID:        2496
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   742 Bytes
Submissao: 19/04/17 19:25:27
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    while(N--)
    {
        string seq;
        int M, counter = 0;

        cin >> M >> seq;

        for(int i = M - 1; i >= 0 && counter < 2; i--)
        {
            for(int j = 0; j < i; j++)
            {
                if(seq[i] < seq[j]) {
                    swap(seq[i], seq[j]);
                    counter++;
                    i = M;
                    break;
                }
            }
        }

        if(counter < 2)
        {
            cout << "There are the chance." << endl;
        }
        else
        {
            cout << "There aren't the chance." << endl;
        }
    }
}
