#include <iostream>
using namespace std;

int main()
{
    int N, S, times_hit = 0, shot_height[51] = {0};
    cin >> N;
    string cond;

    for(int k = 0; k < N; k++){

        cin >> S;

        for(int i = 0; i < S; i++)
            cin >> shot_height[i];

        cin >> cond;

        for(int i = 0; i < S; i++){

            if(cond[i] == 'J' && shot_height[i] > 2)
                    ++times_hit;
            else if(cond[i] == 'S' && shot_height[i] <= 2)
                    ++times_hit;
        }
        cout << times_hit << endl;
        times_hit = 0;
    }
}
