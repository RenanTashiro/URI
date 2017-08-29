/*
Nome:      Sequência de Threebonacci
ID:        1739
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   963 Bytes
Submissao: 06/03/15 20:55:25
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string convertInt(unsigned int long long number)
{
   stringstream ss;
   ss << number;
   return ss.str();
}

int Find(string str){

    for(unsigned int i = 0; i < str.size(); i++)
        if(str[i] == '3')
            return 1;
}

int main()
{
    int N;
    unsigned int long long fib, T1 = 1, T2 = 1;
    string s_int;
    bool flag = false;

    while(cin >> N){

        for(int i = 0; i < N; i++){

        flag = false;

            while(!flag){

            fib = T1 + T2;
            T1 = T2;
            T2 = fib;

                if(fib % 3 == 0)
                    flag = true;
                else{
                s_int = convertInt(fib);
                    if(Find(s_int) == 1)
                        flag = true;
                }
            }
        }
        cout << fib << endl;
        T1 = T2 = 1;
    }
}