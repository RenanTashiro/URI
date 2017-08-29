/*
Nome:      Estiagem
ID:        1023
Resposta:  Accepted
Linguagem: C++
Tempo:     0.716s
Tamanho:   1,29 KB
Submissao: 29/07/15 19:38:40
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <map>
using namespace std;

int main()
{
    int N, cidade = 1;

    while( cin >> N && N != 0 ){

        int n_people, consum, total_people = 0;
        double average = 0.0;
        map<int,int> stats;

        for( int i = 0; i < N; i++ ){
            cin >> n_people >> consum;
            total_people += n_people;
            average += consum;
            stats[consum/n_people] += n_people;
        }

        bool flag = false;

        if( cidade > 1 ) cout << '\n';
        cout << "Cidade# "<< cidade++ <<":\n";

        for( map<int,int>::iterator it = stats.begin(); it != stats.end(); ++it ){
            if( !flag ) cout << it->second << '-' << it->first;
            else        cout << ' ' << it->second << '-' << it->first;
            flag = true;
        }

        average = ( double ) average / total_people;
        double int_part;
        int frac_part = ( int )( modf ( ( double ) average, &int_part ) * 100 );

        if( frac_part < 10 )
            cout << "\nConsumo medio: "<< ( int ) int_part << ".0" << ( int ) frac_part << " m3.\n";
        else{
            cout << "\nConsumo medio: "<< ( int ) int_part << "." << ( int ) frac_part << " m3.\n";
        }

    }

}

