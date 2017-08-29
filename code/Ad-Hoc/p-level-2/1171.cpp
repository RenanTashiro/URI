/*
Nome:      Frequência de Números
ID:        1171
Resposta:  Accepted
Linguagem: C++
Tempo:     0.016s
Tamanho:   1,2 KB
Submissao: 31/01/15 12:46:05
*/
#include <iostream>
using namespace std;

void shellSort(int numbers[], int array_size)
{

int i, j, increment, temp;

increment = 3;

while (increment > 0){
    for (i=0; i < array_size; i++){
        j = i;
        temp = numbers[i];
            while ((j >= increment) && (numbers[j-increment] > temp)){
                numbers[j] = numbers[j - increment];
                j = j - increment;
            }
        numbers[j] = temp;
    }

    if (increment/2 != 0)
        increment = increment/2;
    else if (increment == 1)
        increment = 0;
    else
        increment = 1;
}
}


int main()
{
    int N, X, aux = 0;
    cin >> N;
    int valores[N], contador[5000];

    for(int i = 0; i < N; i++){

        cin >> X;

        for(int j = 0; j < aux + 1; j++){
            if(X == valores[j])
                break;
            if(j == aux){
                valores[aux] = X;
                aux += 1;
                break;
            }
        }
        contador[X] += 1;
    }
        shellSort(valores,aux);

        for(int u = 0; u < aux; u++){
            cout << valores[u] << " aparece " << contador[valores[u]] << " vez(es)" << endl;
        }

}
