/*
Nome:      O Prisioneiro de Azkaban
ID:        1840
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   2,14 KB
Submissao: 16/11/15 12:24:23
*/
#include <bits/stdc++.h>

#define JOG 4
#define MANILHA 20

using namespace std;

int valor[100], naipe[100];

int melhorMao(string c[], string manilha)
{
    int melhorId = 0, melhorMao = -1, locNaipe = -1;

    for(int i = 0; i < JOG; i++) {
        if(valor[ (int)c[i][0] ] == (valor[ (int)manilha[0] ] == 13 ? 4 : valor[ (int)manilha[0] ]+1)) {
            if(melhorMao == MANILHA) {
                if(naipe[ (int)c[i][1] ] > locNaipe) {
                    melhorId = i;
                    locNaipe = naipe[ (int)c[i][1] ];
                }
            }
            else {
                melhorMao = MANILHA;
                melhorId = i;
                locNaipe = naipe[ (int)c[i][1] ];
            }
        }
        else if(melhorMao < valor[ (int)c[i][0] ]) {
            melhorMao = valor[ (int)c[i][0] ];
            melhorId = i;
        }
        else if(melhorMao == valor[ (int)c[i][0] ]) {
            melhorId = -1;
        }
    }

    return melhorId;
}

int main()
{
    valor[52] = 4;  // 4
    valor[53] = 5;  // 5
    valor[54] = 6;  // 6
    valor[55] = 7;  // 7
    valor[81] = 8;  // Q
    valor[74] = 9;  // J
    valor[75] = 10; // K
    valor[65] = 11; // A
    valor[50] = 12; // 2
    valor[51] = 13; // 3
    naipe[68] = 0; // DIAMOND
    naipe[83] = 1; // SPADE
    naipe[72] = 2; // HEART
    naipe[67] = 3; // COPAS

    int N, aposta[JOG], pontos[JOG] = {0};
    string manilha, nome[JOG];

    cin >> N >> manilha;

    for(int i = 0; i < JOG; i++) {
        cin >> nome[i] >> aposta[i];
    }

    for(int i = 0; i < N; i++) {
        string c[JOG];
        cin >> c[0] >> c[1] >> c[2] >> c[3];
        int ans = melhorMao(c, manilha);
        if(ans != -1) pontos[ans]++;
    }

    int id = 0, menor = 5000;

    for(int i = 0; i < JOG; i++) {
        int pt = abs(aposta[i]-pontos[i]);
        if(pt < menor) {
            menor = pt;
            id = i;
        }
        else if(pt == menor) {
            id = -1;
        }
    }

    if(id == -1) {
        cout << "*\n";
    }
    else {
        cout << nome[id] << "\n";
    }

    return 0;
}