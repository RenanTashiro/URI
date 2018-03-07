/*
Nome:      Tesouro
ID:        2561
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   4,59 KB
Submissao: 18/09/17 16:29:05
*/
#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

typedef pair<int,int> ii;

struct Rectangle
{
    ii left_up, left_down, right_up, right_down;
    int up, right, down, left;

    Rectangle(int x0, int y0, int x1, int y1)
    {
        left_up = ii(min(x0, x1), max(y0, y1));
        left_down = ii(min(x0, x1), min(y0, y1));
        right_up = ii(max(x0, x1), max(y0, y1));
        right_down = ii(max(x0, x1), min(y0, y1));
        up = max(y0, y1);
        down = min(y0, y1);
        right = max(x0, x1);
        left = min(x0, x1);
    }
};

int main()
{
    int x0, x1, y0, y1;
    int a0, a1, b0, b1;

    while(cin >> x0 >> y0 >> x1 >> y1)
    {
        cin >> a0 >> b0 >> a1 >> b1;

        Rectangle R1(x0, y0, x1, y1), R2(a0, b0, a1, b1);

        if(R1.left >= R2.left && R1.right <= R2.right && R1.up <= R2.up && R1.down >= R2.down)
        {
            if((R1.right - R1.left) * (R1.up - R1.down) <= 10) // if the intersection area is lower than 10
            {
                cout << "adequada" << endl;
            }
            else
            {
                cout << "grande" << endl;
            }            
        }
        else if(R2.left >= R1.left && R2.right <= R1.right && R2.up <= R1.up && R2.down >= R1.down)
        {
            if((R2.right - R2.left) * (R2.up - R2.down) <= 10) // if the intersection area is lower than 10
            {
                cout << "adequada" << endl;
            }
            else
            {
                cout << "grande" << endl;
            }            
        }
        else if(R1.right_up == R2.left_down || R1.right_down == R2.left_up || R1.left_down == R2.right_up || R1.left_up == R2.right_down) // Intersection between point
        {
            cout << "ponto" << endl;
        }
        else if((R1.down == R2.up || R1.up == R2.down) && ((R1.right >= R2.left && R1.left <= R2.right) || (R1.right <= R2.left && R1.right >= R2.left))) // Case 5, 6
        {
            cout << "linha" << endl;
        }
        else if((R1.right == R2.left || R1.left == R2.right) && ((R1.up >= R2.down && R1.down <= R2.up) || (R1.up <= R2.down && R1.up >= R2.down))) // Case 7, 8
        {
            cout << "linha" << endl;
        }
        else if(R1.right_up.x >= R2.left_down.x && R1.right_up.y >= R2.left_down.y && R1.right_down.x <= R2.right_up.x && R1.right_down.y <= R2.right_up.y) // Case 1
        {
            if((R1.right_up.x - R2.left_down.x) * (R1.right_up.y - R2.left_down.y) <= 10) // if the intersection area is lower than 10
            {
                cout << "adequada" << endl;
            }
            else
            {
                cout << "grande" << endl;
            }
        }
        else if(R1.right_down.x >= R2.left_up.x && R1.right_down.y <= R2.left_up.y && R1.right_up.x <= R2.right_down.x && R1.right_up.y >= R2.right_down.y) // Case 2
        {
            if((R1.right_down.x - R2.left_up.x) * (R2.left_up.y - R1.right_down.y) <= 10) // if the intersection area is lower than 10
            {
                cout << "adequada" << endl;
            }
            else
            {
                cout << "grande" << endl;
            }
        }
        else if(R2.right_up.x >= R1.left_down.x && R2.right_up.y >= R1.left_down.y && R2.right_down.x <= R1.right_up.x && R2.right_down.y <= R1.right_up.y) // Case 3
        {
            if((R2.right_up.x - R1.left_down.x) * (R2.right_up.y - R1.left_down.y) <= 10) // if the intersection area is lower than 10
            {
                cout << "adequada" << endl;
            }
            else
            {
                cout << "grande" << endl;
            }
        }
        else if(R2.right_down.x >= R1.left_up.x && R2.right_down.y <= R1.left_up.y && R2.right_up.x <= R1.right_down.x && R2.right_up.y >= R1.right_down.y) // Case 4
        {
            if((R2.right_down.x - R1.left_up.x) * (R1.left_up.y - R2.right_down.y) <= 10) // if the intersection area is lower than 10
            {
                cout << "adequada" << endl;
            }
            else
            {
                cout << "grande" << endl;
            }
        }
        else
        {
            cout << "inexistente" << endl;
        }
    }
}

/*

Four scenario

Case 1:

    [R2]
[R1]
__________

Case 2:

[R1]
    [R2]
__________

Case 3:

    [R1]
[R2]
__________

Case 4:

[R2]
    [R1]
__________

Case 5:

[R1]
[R2]
__________

Case 6:

[R2]
[R1]
__________

Case 7:

[R1][R2]
__________

Case 8:

[R2][R1]
__________

*/
