#include <bits/stdc++.h>

#define TOP   0
#define FRONT 1
#define RIGHT 2
#define BACK  3
#define LEFT  4
#define DOWN  5

using namespace std;

typedef tuple<int,int,int,int,int,int> T6;

void swap_adj(int a, int b, int c, int d, int cube[])
{
	swap(cube[c], cube[d]);
	swap(cube[a], cube[c]);
	swap(cube[b], cube[d]);
}

void swap_inv(int a, int b, int c, int d, int cube[])
{
	swap(cube[a], cube[b]);
	swap(cube[c], cube[d]);
}

bool lesser(int a, int b, int c, int d, int cube[])
{
	int A = cube[a], B = cube[b], C = cube[c], D = cube[d];
	if(A > B) swap(A, B);
	if(C > D) swap(C, D);
	return A < C || (A <= C && B < D);
}

/*
2
2 2 3 2 3 2
3 2 2 2 2 3
2
3 2 2 3 2 2
2 3 2 2 3 2
*/
void sort_cube(int cube[]) 
{	
	if(lesser(FRONT, BACK, TOP, DOWN, cube) && lesser(FRONT, BACK, RIGHT, LEFT, cube)) {
		swap_adj(FRONT, BACK, TOP, DOWN, cube);
	}
	else if(lesser(RIGHT, LEFT, TOP, DOWN, cube)) {
		swap_adj(RIGHT, LEFT, TOP, DOWN, cube);
	}
	if(lesser(RIGHT, LEFT, FRONT, BACK, cube)) {
		swap_adj(RIGHT, LEFT, FRONT, BACK, cube);
	}
	if(cube[TOP] > cube[DOWN])  	
		swap_inv(TOP, DOWN, FRONT, BACK, cube);			
	if(cube[TOP] == cube[DOWN] && cube[FRONT] > cube[BACK]) {
		swap_inv(FRONT, BACK, TOP, DOWN, cube);
	}
	else if(cube[FRONT] > cube[BACK]) 
		swap_inv(FRONT, BACK, RIGHT, LEFT, cube);
	if(cube[FRONT] == cube[BACK] && cube[RIGHT] > cube[LEFT]) {
		swap_inv(FRONT, BACK, RIGHT, LEFT, cube);
	}
	else if(cube[TOP] == cube[DOWN] && cube[RIGHT] > cube[LEFT]) {
		swap_inv(TOP, DOWN, RIGHT, LEFT, cube);
	}
}

ofstream out("1368.out");

int main()
{
	int N;
	
	while(scanf("%d", &N) && N != 0)
	{
		int cube[N][6];
	
		for(int n = 0; n < N; n++) {
			for(int i = 0; i < 6; i++) {
				scanf("%d", &cube[n][i]);
			}
			sort_cube(cube[n]);
		}
		
		map<T6,bool> diff;
		
		for(int i = 0; i < N; i++) {
			printf("%d %d %d %d %d %d\n", cube[i][0], cube[i][1], cube[i][2], cube[i][3], cube[i][4], cube[i][5]);
		}
		
		for(int i = 0; i < N; i++) {
			diff[T6(cube[i][0], cube[i][1], cube[i][2], cube[i][3], cube[i][4], cube[i][5])] = true;
		}	
		
		printf("%d\n", (int) diff.size());
		out << diff.size() << endl;
	}
}
