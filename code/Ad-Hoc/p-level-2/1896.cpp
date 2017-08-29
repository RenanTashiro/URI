/*
Nome:      É Hora do Duelo!
ID:        1896
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,38 KB
Submissao: 19/10/15 12:33:59
*/
#include <bits/stdc++.h>

using namespace std;

struct Cartas {
    int atk, def, hp;
};

bool possible = false;

int compare( const void *first, const void *second )
{
    Cartas firstC = *( Cartas* ) first;
    Cartas secondC = *( Cartas* ) second;
    return firstC.atk - secondC.atk;
}

void findSubSum( Cartas vet[], Cartas sum, Cartas actSum, int pivo, int n )
{
    for( int i = pivo; i < n && !possible; i++ ) {
        Cartas tmp = actSum;
        tmp.atk += vet[i].atk;
        tmp.def += vet[i].def;
        tmp.hp += vet[i].hp;
        if( pivo > 0 && tmp.atk == sum.atk && tmp.def == sum.def && tmp.hp == sum.hp ) {
            possible = true;
            break;
        }
        for( int j = i + 1; j < n; j++ ) {
            if( tmp.atk + vet[j].atk <= sum.atk && tmp.def + vet[j].def <= sum.def && tmp.hp + vet[j].hp <= sum.hp )
            findSubSum( vet, sum, tmp, pivo + 1, n );
        }
    }
}

int main()
{
    Cartas *cartas;

    int N, A, D, H;

    cin >> N >> A >> D >> H;

    cartas = new Cartas[N];

    for( int i = 0; i < N; i++ ) {
        cin >> cartas[i].atk >> cartas[i].def >> cartas[i].hp;
    }

    qsort( cartas, N, sizeof( Cartas ), compare );
    findSubSum( cartas, { A, D, H }, { 0, 0, 0 }, 0, N );

    if( possible ) {
        cout << "Y\n";
    }
    else {
        cout << "N\n";
    }

    return 0;
}
