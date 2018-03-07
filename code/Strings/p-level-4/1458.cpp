/*
Nome:      Campeonato de SMS
ID:        1458
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     1.568s
Tamanho:   2,46 KB
Submissao: 12/09/17 18:59:30
*/
#include <bits/stdc++.h>
using namespace std;

#define ENTER_KEY 10

const double mov_speed = 30.0;

const double press_cost[] = {
    0.2, 0.4, 0.6, // abc
    0.2, 0.4, 0.6, // def
    0.2, 0.4, 0.6, // ghi
    0.2, 0.4, 0.6, // jkl
    0.2, 0.4, 0.6, // mno
    0.2, 0.4, 0.6, 0.8, // pqrs
    0.2, 0.4, 0.6, // tuv
    0.2, 0.4, 0.6, 0.8, // wxyz
    0.2 // SPACE
};

const int c_key[] = {
    2, 2, 2, 3, 3, 3, 4, 4, 4,
    5, 5, 5, 6, 6, 6, 7, 7, 7,
    7, 8, 8, 8, 9, 9, 9, 9, 0
};

map<int,pair<int,int>> key_coord = {
    {2, {1, 2}},
    {3, {1, 3}},
    {4, {2, 1}},
    {5, {2, 2}},
    {6, {2, 3}},
    {7, {3, 1}},
    {8, {3, 2}},
    {9, {3, 3}},
    {0, {4, 2}},
    {ENTER_KEY, {4,3}}
};

double travel_dist(pair<int,int> a, pair<int,int> b)
{
    int x = a.first - b.first;
    int y = a.second - b.second;
    return sqrt(x*x + y*y);
}

double cost(int from, int to, char key)
{
    double td = travel_dist(key_coord[from], key_coord[to]);
    return (key == '#' ? 0.2 : press_cost[key-'a']) + (td / mov_speed);
}

double dp[15][15][15][150];

double solve(int left_hand, int right_hand, int pos, int prev_key, string &msg)
{
    if(pos == (int)msg.size())
        return 0.0;

    if(dp[left_hand][right_hand][prev_key][pos])
        return dp[left_hand][right_hand][prev_key][pos];

    if(msg[pos] == ' ')
        msg[pos] = '{';

    double ans;
    int key = c_key[msg[pos]-'a'];

    if(prev_key == key)
    {
        double rhc = cost(right_hand, ENTER_KEY, '#');
        double lhc = cost(left_hand, ENTER_KEY, '#');

        ans = min(
            solve(left_hand, ENTER_KEY, pos, 1, msg) + rhc,
            solve(ENTER_KEY, right_hand, pos, 1, msg) + lhc
        );
    }
    else
    {
        double rhc = cost(right_hand, key, msg[pos]);
        double lhc = cost(left_hand, key, msg[pos]);

        ans = min(
            solve(left_hand, key, pos+1, key, msg) + rhc,
            solve(key, right_hand, pos+1, key, msg) + lhc
        );
    }

    return dp[left_hand][right_hand][prev_key][pos] = ans;
}

int main()
{
    string msg;

    while(getline(cin, msg))
    {
        for(int i = 0; i < 15; i++)
            for(int j = 0; j < 15; j++)
                for(int k = 0; k < 15; k++)
                    for(int l = 0; l < (int)msg.size(); l++)
                        dp[i][j][k][l] = 0.0;

        cout << fixed << setprecision(2) << solve(4, 6, 0, 1, msg) << endl;
    }
}
