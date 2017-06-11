#include <iostream>
using namespace std;

int main()
{
    int N, M, p1, p2;

    for(int i = 0; i < 100; i++){

        cin >> N >> M;

        string time[N], time_aux[M], time_aux2[M];
        int time_pontos[N];

        for(int j = 0; j < N; j++)
            cin >> time[j];

        for(int j = 0; j < M; j++){
            cin >> p1 >> time_aux[j] >> p2 >> time_aux2[j];

            if(p1 > p2)
            for(int k = 0; k < N; k++){
                if(time[k] == time_aux[j])
                    time_pontos[k] += 3;
            }
            else if(p1 < p2)
            for(int k = 0; k < N; k++){
                if(time[k] == time_aux2[j])
                    time_pontos[k] += 3;
            }
            else{
                for(int k = 0; k < N; k++){
                if(time[k] == time_aux[j])
                    time_pontos[k] += 1;
                }
                for(int k = 0; k < N; k++){
                if(time[k] == time_aux2[j])
                    time_pontos[k] += 1;
            }
            }
        }
        cout << time_pontos[0] << endl << time_pontos[1];


    }
}

