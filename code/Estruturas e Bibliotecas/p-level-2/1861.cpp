/*
Nome:      O Hall dos Assassinos
ID:        1861
Resposta:  Accepted
Linguagem: C++
Tempo:     0.584s
Tamanho:   489 Bytes
Submissao: 07/08/15 09:11:03
*/
#include <iostream>
#include <map>
using namespace std;
 
int main()
{
    string murderers, death;
    map<string,int> hall;
    map<string,bool> deads;
 
    while( cin >> murderers >> death ){
        hall[murderers]++;
        deads[death] = true;
    }
 
    cout << "HALL OF MURDERERS\n";
 
    for( map<string,int>::iterator it = hall.begin(); it != hall.end(); ++it )
        if( !deads[it->first] )
            cout << it->first << ' ' << it->second << '\n';
}