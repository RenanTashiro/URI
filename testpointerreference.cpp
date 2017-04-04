#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int **teste;
    teste = (int**) malloc(sizeof(int[5][5]));

    for(int i = 0; i < 5; i++) {
        teste[i] = 0;
    }

    cout << teste[3] << "\n";
}
