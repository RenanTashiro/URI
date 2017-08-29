/*
Nome:      Comparação de Substring
ID:        1237
Resposta:  Accepted
Linguagem: C++
Tempo:     0.816s
Tamanho:   815 Bytes
Submissao: 12/02/15 11:47:24
*/
#include <iostream>
#include <string>
using namespace std;

int compareString(string one, string two, int len, int index, int &len_sub){

string sub;

   for(int i = 0; i < two.size() - (len - 1); i++){

        sub = two.substr(index,len);
        index++;

        if(one.find(sub) != string::npos){
            len_sub++;
            break;
        }
   }
        len++;

        if(len <= two.size()){
            compareString(one, two, len, 0, len_sub);
        }
}

int main(){

    int valor = 0;
    string one, two, temp;

    while(getline(cin,one), getline(cin,two)){

    if(one < two){
        temp = one;
        one = two;
        two = temp;
    }

        compareString(one, two, 1, 0, valor);
        cout << valor << endl;
        valor = 0;
    }
}

