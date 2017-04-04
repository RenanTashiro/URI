#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, index = 0, cont[200];
    cin >> N;
    getchar();
    string text; char comp;
    vector <char> vector_text;

    for(int i = 0; i < N; i++){

        getline(cin,text);
        vector_text = {text.begin(),text.end()};
        sort(vector_text.begin(),vector_text.end());
        comp = vector_text[0];

        for(int k = 0; k < vector_text.size(); k++){
            if(comp == vector_text[k])
                cont[index]++;
            else{
                comp = vector_text[k];
                index++;
            }
        }
        cout << cont[0];

    }
}
