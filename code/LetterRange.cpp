#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int index = -1;
    string text, letter_range, virgula = ",", two_dot = ":", space = " ";
    vector <char> sort_text;
    char comp;

    while(getline(cin,text)){

        sort_text = {text.begin(),text.end()};
        sort(sort_text.begin(),sort_text.end());

        for(int i = 0; i < sort_text.size(); i++){
            if(sort_text[i] != ' '){
                index = i;
                break;
            }
        }
        if(index == - 1){
            cout << endl;
            continue;
        }
        comp = sort_text[index];
        letter_range = comp;

        for(int i = index + 1; i < sort_text.size(); i++){

            if(sort_text[i] != char(comp + 1) && sort_text[i] != comp){
                letter_range += two_dot + comp;
                letter_range += virgula + space + sort_text[i];
            }
            comp = sort_text[i];
        }
        letter_range += two_dot + comp;

        cout << letter_range << endl;
        index = -1;
    }
}
