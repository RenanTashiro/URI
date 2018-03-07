/*
Nome:      Autorama
ID:        2316
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   1,24 KB
Submissao: 21/04/17 21:41:13
*/
#include <bits/stdc++.h>
using namespace std;

struct Car {
    int id, n_turn, lst_sensor, sensor_time;

    Car(int _id) : id(_id), n_turn(0), lst_sensor{1}, sensor_time(-1) {}

    bool operator < (const Car &car) const
    {
        if(n_turn == car.n_turn)
        {
            if(lst_sensor == car.lst_sensor)
            {
                return sensor_time > car.sensor_time;
            }

            return lst_sensor < car.lst_sensor;
        }

        return n_turn < car.n_turn;
    }
};



int main()
{
    int K, N, M;

    cin >> K >> N >> M;

    vector<Car> cars;

    for(int i = 0; i < N; i++)
    {
        cars.push_back(Car(i));
    }

    for(int i = 0; i < M; i++)
    {
        int X, Y;

        cin >> X >> Y;

        if(cars[X-1].lst_sensor == Y)
        {
            cars[X-1].lst_sensor++;
            cars[X-1].sensor_time = i;

            if(cars[X-1].lst_sensor > K)
            {
                cars[X-1].lst_sensor = 1;
                cars[X-1].n_turn++;
            }
        }
    }

    sort(cars.begin(), cars.end());

    cout << cars[N-1].id + 1;

    for(int i = N-2; i >= 0; i--)
    {
        cout << ' ' << cars[i].id + 1;
    }

    cout << endl;
}
