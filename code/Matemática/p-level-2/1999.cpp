/*
Nome:      Baile de Reconciliação
ID:        1999
Resposta:  Accepted
Linguagem: C++
Tempo:     0.064s
Tamanho:   762 Bytes
Submissao: 26/11/15 18:49:58
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    while(cin >> N && N != -1) {
        int counter = 0, subans = 0, subsubans = 0, ans = 0;

        for(int i = 0; i <= N; i++) {
            for(int j = 0; j <= i; j++) {
                subans = i*j;
                if(subans > N) {
                    break;
                }
                subsubans = i+j;
                for(int k = 0; k <= j; k++) {
                    ans = subans + k*subsubans;
                    if(ans > N){
                        break;
                    } else if(ans == N) {
                        counter++;
                    }
                }
            }
        }

        cout << counter << "\n";
    }
}
