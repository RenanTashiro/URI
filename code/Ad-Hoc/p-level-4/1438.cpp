/*
Nome:      Desempilhando Caixas
ID:        1438
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   1,04 KB
Submissao: 16/09/17 08:21:45
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, P;

    while(cin >> N >> P && N)
    {
        int stack_size[P], box_one_pos, box_index;

        for(int i = 0; i < P; i++)
        {
            cin >> stack_size[i];

            for(int j = 0; j < stack_size[i]; j++)
            {
                int bj;

                cin >> bj;

                if(bj == 1)
                {
                    box_one_pos = j;
                    box_index = i;
                }
            }
        }


        int left = 0, right = 0;

        for(int i = box_index + 1; i < P; i++)
            if(stack_size[i] > box_one_pos)
                right += stack_size[i] - box_one_pos;
            else
                break;

        for(int i = box_index - 1; i >= 0; i--)
            if(stack_size[i] > box_one_pos)
                left += stack_size[i] - box_one_pos;
            else
                break;

        cout << min(right, left) + stack_size[box_index] - box_one_pos - 1 << endl;
    }
}
