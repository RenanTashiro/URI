/*
Nome:      Substituição de Tag
ID:        1254
Resposta:  Accepted
Linguagem: C++
Tempo:     0.044s
Tamanho:   1,59 KB
Submissao: 11/06/15 15:51:47
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string tag, text, value_to_replace;

    while( cin >> tag ){

        cin >> value_to_replace;
        cin.ignore();
        getline( cin, text );

        string new_text;

        for( unsigned i = 0; i < text.size(); i++ ){
            if( text[i] == '<' ){
                new_text += text[i];
                for( unsigned j = i + 1; text[j] != '<' && j < text.size(); j++ ){
                    if( text[j] == '>' ){
                        size_t index = 0;
                        for( int k = i + 1; k <= j; k++ ){
                            if( tag[index] == text[k] || tag[index] + 32 == text[k] || tag[index]  - 32 == text[k] ){
                                index++;
                                if( index == tag.size() && text[i] == '<' ){
                                    new_text += value_to_replace;
                                    index = 0;
                                }
                            }
                            else if( index > 0 ){
                                for( int l = k - index; l < k+1; l++ ) new_text += text[l];
                                index = 0;
                            }
                            else{
                                new_text += text[k];
                            }
                        }
                    i = j;
                    }
                }
            }
            else{
                new_text += text[i];
            }
        }


        cout << new_text << endl;
    }
}