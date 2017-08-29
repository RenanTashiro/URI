/*
Nome:      Animal
ID:        1049
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,01 KB
Submissao: 06/01/15 19:40:26
*/
#include <iostream>
using namespace std;

int main()
{
    string word1, word2, word3;
    cin >> word1 >> word2 >> word3;

    if(word1 == "vertebrado" && word2 == "ave" && word3 == "carnivoro")
        cout << "aguia" << endl;
    if(word1 == "vertebrado" && word2 == "ave" && word3 == "onivoro")
        cout << "pomba" << endl;
    if(word1 == "vertebrado" && word2 == "mamifero" && word3 == "onivoro")
        cout << "homem" << endl;
    if(word1 == "vertebrado" && word2 == "mamifero" && word3 == "herbivoro")
        cout << "vaca" << endl;
    if(word1 == "invertebrado" && word2 == "inseto" && word3 == "hematofago")
        cout << "pulga" << endl;
    if(word1 == "invertebrado" && word2 == "inseto" && word3 == "herbivoro")
        cout << "lagarta" << endl;
    if(word1 == "invertebrado" && word2 == "anelideo" && word3 == "hematofago")
        cout << "sanguessuga" << endl;
    if(word1 == "invertebrado" && word2 == "anelideo" && word3 == "onivoro")
        cout << "minhoca" << endl;
}
