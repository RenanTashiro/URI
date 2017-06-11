#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    int n_char = 0, n_pal = 0, cond = 0, stor = 0, media = 0;
    string statement;

    while(getline(cin,statement)){

    statement += ' ';

        for(int i = 0; i < statement.length(); i++){

            if(isalpha(statement[i]))
                stor++;
            else if(isdigit(statement[i]) || statement[i] != ' ' && statement[i+1] != ' ')
                cond = 1;
            if(statement[i] == ' '){
                if(cond == 0 && stor > 0){
                n_pal++;
                n_char += stor;
                }
                stor = 0;
                cond = 0;
            }
        }
        if(n_pal>0)
        media = n_char / n_pal;

        if(media <= 3 || media == 0)
            cout << "250" << endl;
        else if(media == 4 || media == 5)
            cout << "500" << endl;
        else
            cout << "1000" << endl;

    n_char = n_pal = stor = cond = media = 0;
    }
}
