#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int IsPot( long double val );

int main()
{
    int maior = -1, index = -1;
    int jogador[3];
    unsigned int rodadas;

    while( cin >> rodadas && rodadas != 0){

        int pt_jogador[3] = {0};

        for( unsigned int i = 0; i < rodadas; i++ ){

            cin >> jogador[0] >> jogador[1] >> jogador[2];

            bool jogadorPOT[3] = {0};

            for( int j = 0; j < 3; j++ ){

                if( !( jogador[j] & ( jogador[j] - 1 ) ) ){
                   pt_jogador[j] += 1;
                   jogadorPOT[j] = true;

                }
                if( jogador[j] > maior ){
                    maior = jogador[j];
                    index = j;
                    }
            }
            if( index != -1 && jogadorPOT[ index ] ){
                pt_jogador[ index ] += 1;
            }
            maior = index = -1;
        }

        for( int i = 0; i < 3; i++ ){
            if(pt_jogador[i] == maior)
                        index = -1;
            if( pt_jogador[i] > maior ){
                maior = pt_jogador[i];
                index = i;

            }
        }
        if(index == 0)
            cout << "Uilton" << endl;
        else if(index == 1)
            cout << "Rita" << endl;
        else if(index == 2)
            cout << "Ingred" << endl;
        else
            cout << "URI" << endl;

        maior = index = -1;
    }
}
