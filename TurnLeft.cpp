#include <iostream>
using namespace std;

int main()
{
    int N, direcao;
    char turn;

    while(cin >> N){

    if(N == 0)
    break;

    direcao = 0;

    for(int i = 0; i < N; i++){
        cin >> turn;
        if(turn == 'D'){
            direcao++;
            continue;
        }
        else
            direcao--;
    }
    direcao = direcao % 4;

    if(direcao == 0){
        cout << "N" << endl;
        continue;
    }
    else if(direcao == 1 || direcao == -3){
        cout << "L" << endl;
        continue;
    }
    else if(direcao == 2 || direcao == -2){
        cout << "S" << endl;
        continue;
    }
    else
        cout << "O" << endl;

    }
}
