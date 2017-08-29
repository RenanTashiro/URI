/*
Nome:      Soma de Fatoriais
ID:        1161
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   474 Bytes
Submissao: 21/01/15 13:43:18
*/
#include <iostream>
using namespace std;

int main(){

unsigned int long long M, N, soma;
int aux, aux1, aux3, aux2;

    while(cin >> M >> N){

    aux = M;
    aux1 = M;
    aux2 = N;
    aux3 = N;

if(M == 0)
    M = 1;
else
   for(int i = 0; i < aux - 1; i++){
        M *= --aux1;
   }
if(N == 0)
    N = 1;
else
   for(int i = 0; i < aux2 - 1; i++){
        N *= --aux3;
  }
  
    soma = M + N;
    
    cout << soma << endl;
    }
}
