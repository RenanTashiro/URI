/*
Nome:      A Lenda de Flavious Josephus
ID:        1030
Resposta:  Accepted
Linguagem: C++
Tempo:     0.036s
Tamanho:   690 Bytes
Submissao: 18/05/15 16:52:00
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int NC;
    int  n, c;

    cin >> NC;

    for( int i = 0; i < NC; i++ ){

        cin >> n >> c;

        vector<int> circle;

        for( int j = 1; j <= n; j++ ){
            circle.push_back( j );
        }

        int index = c;

        while( circle.size() != 1 ){
            
            while( index > circle.size() ){
                index -= circle.size();
            }
        
            circle.erase( circle.begin()+( index - 1 )  );
            index += c - 1;
        }
        cout << "Case "<< i + 1 <<": " << circle[0] << endl;
    }

    return 0;
}
