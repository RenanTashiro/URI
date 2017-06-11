#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    int aliteracoes = 0, index = 0;
    string atual;
    char compare[100];

    while(getline(cin,atual)){

    if(atual[0] < 95)
      compare[0] = tolower(atual[0]);
    else
        compare[0] = atual[0];

        for(int i = 1; atual[i] != '\0'; i++){
            if(atual[i] == ' '){
                if(atual[i+1] < 95)
                    atual[i+1] = tolower(atual[i+1]);
                if(compare[index] == atual[i+1] && atual[i+1] != compare[index-1])
                    aliteracoes++;

            index++;
            compare[index] = atual[i+1];

            }

        }
    cout << aliteracoes << endl;
    aliteracoes = index = 0;
    }
}
