/*
Nome:      Validação de Nota
ID:        1117
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   446 Bytes
Submissao: 07/01/15 18:28:08
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a, media, b;

    cin >> a;

    while(a < 0 || 10 < a){
        cout << "nota invalida" << endl;
        cin >> a;
}
    cin >> b;

    while(b < 0 || 10 < b){
        cout << "nota invalida" << endl;
        cin >> b;
}
    media = (a + b)  / 2;

    cout << setiosflags(ios::fixed) << setprecision(2) << "media = " << media << endl;
}
