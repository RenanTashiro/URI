#include <bits/stdc++.h>
using namespace std;

#define BLACK 1
#define WHITE 2

typedef pair<int,int> ii;

int tab[501][501] = {{0}};

bool comp_ipair(ii a, ii b)
{
	ii aux_a(a.second, a.first);
	ii aux_b(b.second, b.first);
	return aux_a < aux_b;
}

int main()
{
	vector<ii> b_pos, w_pos;
	int N, P, L, C;
	
	scanf("%d%d", &N, &P);
	
	for(int i = 0; i < P; i++)
	{
		scanf("%d%d", &L, &C);
		tab[L-1][C-1] = BLACK;
		b_pos.push_back(ii(L-1, C-1));
	}
	
	for(int i = 0; i < P; i++)
	{
		scanf("%d%d", &L, &C);
		tab[L-1][C-1] = WHITE;
		w_pos.push_back(ii(L-1, C-1));
	}
	
	sort(b_pos.begin(), b_pos.end());
	sort(w_pos.begin(), w_pos.end());

	//~ vector<ii> b_pos_xord(b_pos), b_pos_yord(b_pos);
	//~ vector<ii> w_pos_xord(w_pos), w_pos_yord(w_pos);
	
	//~ sort(b_pos_xord.begin(), b_pos_xord.end());
	//~ sort(w_pos_xord.begin(), w_pos_xord.end());
	//~ sort(b_pos_yord.begin(), b_pos_yord.end(), comp_ipair);
	//~ sort(w_pos_yord.begin(), w_pos_yord.end(), comp_ipair);
	
	//~ for(int i = 0; i < P; i++)
		//~ cout << w_pos_xord[i].first+1 << ' ' << w_pos_xord[i].second+1 << endl;
	
	int blacks = 0;
	
	//~ , whites = 0
	
	for(int i = 0; i < P; i++)
	{
		int up_left = min(b_pos[i].first, b_pos[i].second);
		int up_right = min(b_pos[i].first, N - 1 - b_pos[i].second);
		int down_left = min(N - 1 - b_pos[i].first, b_pos[i].second);
		int down_right = min(N - 1 - b_pos[i].first, N - 1 - b_pos[i].second);	
		
		// up_left	
		{
			//~ // black-to-black
			for(int j = 0; j < P; j++)	{
				if(i != j && b_pos[i].first >= b_pos[j].first && b_pos[i].second >= b_pos[j].second)					
					up_left = min(up_left, (int)hypot(b_pos[i].first-b_pos[j].first, b_pos[i].second-b_pos[j].second) - 1); 					
			}
					
			// black-to-white
			for(int j = 0; j < P; j++) {
				if(b_pos[i].first >= w_pos[j].first && b_pos[i].second >= w_pos[j].second)
					up_left = min(up_left, (int)hypot(b_pos[i].first-w_pos[j].first, b_pos[i].second-w_pos[j].second) - 1); 
			}
		}
		
		// up_right
		{
			// black-to-black
			//~ cout << up_right << endl;		
			for(int j = 0; j < P; j++)	{
				if(i != j && b_pos[i].first >= b_pos[j].first && b_pos[i].second <= b_pos[j].second) {
					//~ printf("%d,%d %d,%d |%d|\n", b_pos[i].first, b_pos[i].second, b_pos[j].first, b_pos[j].second, (int)hypot(b_pos[i].first-b_pos[j].first, b_pos[i].second-b_pos[j].second));
					up_right = min(up_right, (int)hypot(b_pos[i].first-b_pos[j].first, b_pos[i].second-b_pos[j].second) - 1); 					
				}
			}
					
			// black-to-white
			for(int j = 0; j < P; j++) {
				if(b_pos[i].first >= w_pos[j].first && b_pos[i].second <= w_pos[j].second) {
					//~ printf("%d,%d %d,%d |%d|\n", b_pos[i].first, b_pos[i].second, w_pos[j].first, w_pos[j].second, (int)hypot(b_pos[i].first-w_pos[j].first, b_pos[i].second-w_pos[j].second));
					up_right = min(up_right, (int)hypot(b_pos[i].first-w_pos[j].first, b_pos[i].second-w_pos[j].second) - 1); 
				}
			}	
			//~ cout << up_right << endl;		
		}
		
		// down_left
		{
			// black-to-black
			for(int j = 0; j < P; j++)	{
				if(i != j && b_pos[i].first <= b_pos[j].first && b_pos[i].second >= b_pos[j].second)
					down_left = min(down_left, (int)hypot(b_pos[i].first-b_pos[j].first, b_pos[i].second-b_pos[j].second)); 					
			}
					
			// black-to-white
			for(int j = 0; j < P; j++) {
				if(b_pos[i].first <= w_pos[j].first && b_pos[i].second >= w_pos[j].second)
					down_left = min(down_left, (int)hypot(b_pos[i].first-w_pos[j].first, b_pos[i].second-w_pos[j].second) - 1); 
			}		
		}		
		
		// down_right
		{
			// black-to-black
			for(int j = 0; j < P; j++)	{
				if(i != j && b_pos[i].first <= b_pos[j].first && b_pos[i].second <= b_pos[j].second)
					down_right = min(down_right, (int)hypot(b_pos[i].first-b_pos[j].first, b_pos[i].second-b_pos[j].second) ); 					
			}
					
			// black-to-white
			for(int j = 0; j < P; j++) {
				if(b_pos[i].first <= w_pos[j].first && b_pos[i].second <= w_pos[j].second)
					down_right = min(down_right, (int)hypot(b_pos[i].first-w_pos[j].first, b_pos[i].second-w_pos[j].second) - 1); 
			}			
		}		
		
		blacks += up_left;
		blacks += up_right;
		blacks += down_left;		
		blacks += down_right;
		
		printf("for %d,%d is (%d,%d,%d,%d)\n", b_pos[i].first+1, b_pos[i].second+1, up_left, up_right, down_left, down_right);
	}
	
	puts("");
	
	printf("%d\n", blacks);
}

// tratar o caso de mesmo quadrante usando a maioridade de um indice
// tirar o minimo da distancia entre um ponto e os outros

	//~ for(int i = 0; i < P; i++)
	//~ {
		//~ int dist = INT_MAX;
		
		//~ for(int j = 0; j < P; j++)		
			//~ if(i != j)
				//~ dist = min(dist, (int)hypot(w_pos[i].first-b_pos[j].first, w_pos[i].second-b_pos[j].second));
				
		//~ for(int j = 0; j < P; j++)	
			//~ dist = min(dist, (int)hypot(w_pos[i].first-b_pos[j].first, w_pos[i].second-b_pos[j].second));
		
		//~ printf("for %d is %d\n", i, dist);
		
		//~ whites += dist - 1;
	//~ }
	
	//~ printf("%d %d\n", blacks, whites);
