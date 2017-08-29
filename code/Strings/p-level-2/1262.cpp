/*
Nome:      Leitura Múltipla
ID:        1262
Resposta:  Accepted
Linguagem: C++
Tempo:     0.232s
Tamanho:   747 Bytes
Submissao: 09/02/15 10:00:54
*/
#include <iostream>
using namespace std;

int main()
{
    int P, c_read = 0, total = 0, len = 0;
    string read_write;

    while(cin >> read_write >> P){
            
            len = read_write.length();
    
        for(int i = 0; i < len; i++){

            if(read_write[i] == 87){
                total++;
                if(c_read > 0){
                    total++;
                    c_read = 0;
                }
                continue;
            }
            else
                c_read++;

            if(c_read == P || i == len - 1 && c_read > 0){
                total++;
                c_read = 0;
            }
        }
        cout << total << endl;
        c_read = total = 0;
    }
}
