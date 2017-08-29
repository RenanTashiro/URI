/*
Nome:      Jogo do Maior
ID:        1397
Resposta:  Accepted
Linguagem: C++
Tempo:     0.028s
Tamanho:   407 Bytes
Submissao: 19/01/15 16:54:48
*/
#include <iostream>
using namespace std;

int main()
{
    int N, Og, child, pts1, pts2;

    while(cin >> N){
      if(N == 0)
            break;
      pts1 = 0;
      pts2 = 0;
    for(int i = 0; i < N; i++){

    cin >> Og >> child;

        if(Og > child)
            pts1++;
        else if(Og < child)
            pts2++;
    }
    cout << pts1 << " " << pts2 << endl;
    }
}
