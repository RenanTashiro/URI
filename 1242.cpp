#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    string RNNA;

    while(cin >> RNNA)
    {
        stack<char> BSFC;
        int counter = 0;

        for(int i = 0; i < (int) RNNA.size(); i++) {
            int prev = counter;
            if(!BSFC.empty()) {
                switch(BSFC.top()) {
                    case 'B':
                    if(RNNA[i] == 'S') {
                          BSFC.pop();
                          counter++;
                    } break;
                    case 'S':
                    if(RNNA[i] == 'B') {
                          BSFC.pop();
                          counter++;
                    } break;
                    case 'F':
                    if(RNNA[i] == 'C'){
                          BSFC.pop();
                          counter++;
                    } break;
                    case 'C':
                    if(RNNA[i] == 'F') {
                          BSFC.pop();
                          counter++;
                    } break;
                }
            }
            if(prev == counter) {
                BSFC.push(RNNA[i]);
            }
        }

        cout << counter << "\n";
    }
}
