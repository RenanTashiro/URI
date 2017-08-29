/*
Nome:      Precisa-se de Ajuda
ID:        1676
Resposta:  Accepted
Linguagem: C++
Tempo:     0.024s
Tamanho:   759 Bytes
Submissao: 14/10/15 10:26:35
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int table_value[3000] = {0}, table_counter[3000] = {1};

    int target = 2, idx = 0;

    while( cin >> N && N != 0 )
    {
        while( idx < N )
        {
            int i;

            for( i = 0; i < idx; i++ ) {
                if( table_counter[i] == table_value[i] ) {
                    table_counter[i] = 1;
                    break;
                }
                table_counter[i]++;
            }

            if( i == idx ) {
                table_counter[idx] = 1;
                table_value[idx++] = target;
            }

            target++;
        }

        cout << table_value[N-1] << "\n";
    }

    return 0;
}
