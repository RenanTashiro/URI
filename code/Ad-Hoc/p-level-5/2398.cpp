/*
Nome:      Caça ao Tesouro
ID:        2398
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   922 Bytes
Submissao: 15/06/17 17:11:54
*/
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct clue { int x, y, d; };

int abs(int n) { return max(n, -n); }
int manhattan_distance(int r0, int c0, int r1, int c1) { return abs(r1 - r0) + abs(c1 - c0); }

int main()
{
	int N, K;
	scanf(" %d %d", &N, &K);

	vector<clue> clues;
	for (int i=0; i<K; ++i)
	{
		clue c;
		scanf(" %d %d %d", &c.x, &c.y, &c.d);
		clues.push_back(c);
	}

	int treasure_x, treasure_y;
	int possible_positions_count = 0;
	
	for (int x=0; x<N; ++x)
		for (int y=0; y<N; ++y)
		{
			bool ok = true;
			for (int i=0; i<K; ++i)
				if (manhattan_distance(x, y, clues[i].x, clues[i].y) != clues[i].d)
					ok = false;
			if (ok)
			{ treasure_x = x; treasure_y = y; possible_positions_count++; }
		}

	if (possible_positions_count > 1)
		printf("-1 -1\n");
	else
		printf("%d %d\n", treasure_x, treasure_y);

	return 0;
}