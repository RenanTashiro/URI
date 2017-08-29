/*
Nome:      Experiências
ID:        1094
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   1,19 KB
Submissao: 08/01/15 10:33:10
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int N[n], total = 0, i = 0;
    char C;
    float  pc, pr, ps, tc = 0, tr = 0, ts = 0;

        for(i; i < n; i++){

            cin >> N[i] >> C;
            total = total + N[i];

            switch(C){

                case 'C':
                   tc = tc + N[i]; break;
                case 'R':
                    tr = tr + N[i]; break;
                case 'S':
                    ts = ts + N[i]; break;
            }
        }

        pc = tc * 100 / total;
        pr = tr * 100 / total;
        ps = ts * 100 / total;

        cout << "Total: " << total << " cobaias" << endl;
        cout << "Total de coelhos: " << tc << endl;
        cout << "Total de ratos: " << tr << endl;
        cout << "Total de sapos: " << ts << endl;
        cout << setiosflags(ios::fixed) << setprecision(2) << "Percentual de coelhos: " << pc << " %" << endl;
        cout << setiosflags(ios::fixed) << setprecision(2) << "Percentual de ratos: " << pr << " %" << endl;
        cout << setiosflags(ios::fixed) << setprecision(2) << "Percentual de sapos: " << ps << " %" << endl;

}
