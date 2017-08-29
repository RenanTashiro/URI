/*
Nome:      Carrega ou não Carrega?
ID:        1026
Resposta:  Accepted
Linguagem: C++
Tempo:     0.628s
Tamanho:   2,24 KB
Submissao: 02/02/15 15:40:15
*/
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

string DecToBin(unsigned long long int number)
{
    if ( number == 0 ) return "0";
    if ( number == 1 ) return "1";

    if ( number % 2 == 0 )
        return DecToBin(number / 2) + "0";
    else
        return DecToBin(number / 2) + "1";
}
int long long BinToDec(string number)
{
    unsigned int long long  result = 0, pow = 1;

    for ( int i = number.length() - 1; i >= 0; --i, pow <<= 1 )
        result += (number[i] - '0') * pow;

    return result;
}

int main()
{
    unsigned int long long num1, num2, len1, len2, cont;
    string n1, n2, soma;

    while(cin >> num1 >> num2){

        n1 = DecToBin(num1);
        n2 = DecToBin(num2);

        len1 = n1.length();
        len2 = n2.length();

        if(len1 > len2){
            for( cont = 0; cont < len1 - len2; cont++)
                soma += n1[cont];
                    for(int i = 0; i < len2; i++, cont++){
                        if(n1[cont] == '1' && n2[i] == '1')
                            soma += "0";
                        else if(n1[cont] == '1' || n2[i] == '1')
                            soma += "1";
                        else
                            soma += "0";
                    }
                cout << BinToDec(soma) << endl;
        }
        else if(len1 < len2){
            for( cont = 0; cont < len2 - len1; cont++)
                soma += n2[cont];
                    for(int i = 0; i < len1; i++, cont++){
                        if(n2[cont] == '1' && n1[i] == '1')
                            soma += "0";
                        else if(n2[cont] == '1' || n1[i] == '1')
                            soma += "1";
                        else
                            soma += "0";
                    }
            cout << BinToDec(soma) << endl;
        }
        else{
            for(int i = 0; i < len1; i++){
                if(n1[i] == '1' && n2[i] == '1')
                    soma += "0";
                else if(n1[i] == '1' || n2[i] == '1')
                    soma += "1";
                else
                    soma += "0";
            }
            cout << BinToDec(soma) << endl;
        }
    soma.clear();
    }
}