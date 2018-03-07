/*
Nome:      HameKameKa
ID:        2591
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.020s
Tamanho:   861 Bytes
Submissao: 14/06/17 19:41:23
*/
#include <iostream>

using namespace std;

int main()
{
    int C;

    cin >> C;

    while(C--)
    {
        string ki;
        int n_of_a1 = 0, n_of_a2 = 0;
        bool find_first_a = false, to_second_a = false;

        cin >> ki;

        cout << "k";

        for(auto i : ki)
        {
            if(i == 'a')
            {
                if(!to_second_a)
                {
                    n_of_a1++;
                    find_first_a = true;
                }
                else
                {
                    n_of_a2++;
                }
            }
            else if(find_first_a)
            {
                to_second_a = true;
            }
        }

        for(int i = 0; i < n_of_a1 * n_of_a2; i++)
        {
            cout << "a";
        }

        cout << "\n";
    }
}
