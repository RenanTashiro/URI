/*
Nome:      Tradutor do Papai Noel
ID:        1763
Resposta:  Accepted
Linguagem: C++
Tempo:     0.336s
Tamanho:   1,61 KB
Submissao: 24/06/15 15:25:43
*/
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map< string, string > Santa_translator;

    Santa_translator["brasil"] = "Feliz Natal!";
    Santa_translator["portugal"] = "Feliz Natal!";
    Santa_translator["alemanha"] = "Frohliche Weihnachten!";
    Santa_translator["austria"] = "Frohe Weihnacht!";
    Santa_translator["coreia"] = "Chuk Sung Tan!";
    Santa_translator["suecia"] = "God Jul!";
    Santa_translator["turquia"] = "Mutlu Noeller";
    Santa_translator["espanha"] = "Feliz Navidad!";
    Santa_translator["argentina"] = "Feliz Navidad!";
    Santa_translator["chile"] = "Feliz Navidad!";
    Santa_translator["mexico"] = "Feliz Navidad!";
    Santa_translator["italia"] = "Buon Natale!";
    Santa_translator["libia"] = "Buon Natale!";
    Santa_translator["grecia"] = "Kala Christougena!";
    Santa_translator["irlanda"] = "Nollaig Shona Dhuit!";
    Santa_translator["belgica"] = "Zalig Kerstfeest!";
    Santa_translator["estados-unidos"] = "Merry Christmas!";
    Santa_translator["inglaterra"] = "Merry Christmas!";
    Santa_translator["australia"] = "Merry Christmas!";
    Santa_translator["antardida"] = "Merry Christmas!";
    Santa_translator["canada"] = "Merry Christmas!";
    Santa_translator["siria"] = "Milad Mubarak!";
    Santa_translator["marrocos"] = "Milad Mubarak!";
    Santa_translator["japao"] = "Merii Kurisumasu!";

    string str;

    while( cin >> str ){

       if( Santa_translator[str] != "\0" ){
            cout << Santa_translator[str] << endl;
        }
       else{
            cout << "--- NOT FOUND ---\n";
       }
    }
}