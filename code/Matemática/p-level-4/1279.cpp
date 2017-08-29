/*
Nome:      Ano Bissexto ou Ano não Bissexto
ID:        1279
Resposta:  Accepted
Linguagem: C++
Tempo:     0.008s
Tamanho:   1,65 KB
Submissao: 15/05/15 11:28:15
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    string number;
    int len = -1;
    char *digit2, *digit4;

    while( cin >> number ){

        if( len != -1){
            cout << endl;
        }

        len = number.size();
        digit2 = &number[len-2];
        digit4 = &number[len-4];

        int value2 = atoi( digit2 );
        int value4 = atoi( digit4 );
        int festivalOK = 0, festivalToOk = 0;

        if( value2 % 4 == 0 ){
            if( value4 % 100 == 0 && value4 % 400 == 0 ){
                cout << "This is leap year.\n";
                festivalOK++;
            }
            else if( value4 % 100 != 0 ){
                cout << "This is leap year.\n";
                festivalOK++;
            }
        }

        int total = 0;

        for( int i = 0; i < len; i++ ){
            total += number[i] - 48;
        }

        if( value2 % 5 == 0 && total % 3 == 0 ){
            cout << "This is huluculu festival year.\n";
            festivalToOk++;
        }

        int v1 = 0, v2 = 0;

        for( int i = 0; i < len; i++ ){
            if( i % 2 == 0 ){
                v1 += number[i] - 48;
            }
            else{
                v2 += number[i] - 48;
            }
        }

        int abs_value = fabs( ( v1 - v2 ) );

        if( value2 % 5 == 0 && abs_value % 11 == 0 && festivalOK ){
            cout << "This is bulukulu festival year.\n";
        }
        else if( !festivalOK  && !festivalToOk ){
            cout << "This is an ordinary year.\n";
        }

    }

    return 0;
}

