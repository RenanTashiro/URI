#include <bits/stdc++.h>

#define mk(i, j, k) make_tuple(i, j, k)

using namespace std;

typedef tuple<int,int,int> t3;

int N, M, L; // Dimensoes 

bool valid_move(int row, int col, int lvl)
{
	return row > 0 && row <= N && col > 0 && row <= M && lvl > 0 && lvl <= L;
}

int BFS(int row, int col, int lvl, int drow, int dcol, int dlvl)
{
	queue<pair<t3,int>> Q;
	map<t3, bool> visited;
	visited[mk(row, col, lvl)] = true;
	Q.push({mk(row, col, lvl),0}); // Coord; moviments
	while(!Q.empty()) {
		pair<t3,int> act = Q.front(); Q.pop();
		if(get<0>(act.first) == drow && get<1>(act.first) == dcol && get<2>(act.first) == dlvl) {
			return act.second;
		}
		// Same level
		// 	Up
		if(valid_move(get<0>(act.first)-1, get<1>(act.first)-2, get<2>(act.first)) && !visited[mk(get<0>(act.first)-1,get<1>(act.first)-2,get<2>(act.first))]) {
			Q.push({mk(get<0>(act.first)-1, get<1>(act.first)-2, get<2>(act.first)), act.second+1});
			visited[mk(get<0>(act.first)-1,get<1>(act.first)-2,get<2>(act.first))] = true;
		}
		if(valid_move(get<0>(act.first)-1, get<1>(act.first)+2, get<2>(act.first)) && !visited[mk(get<0>(act.first)-1,get<1>(act.first)+2,get<2>(act.first))]) {
			Q.push({mk(get<0>(act.first)-1, get<1>(act.first)+2, get<2>(act.first)), act.second+1});
			visited[mk(get<0>(act.first)-1,get<1>(act.first)+2,get<2>(act.first))] = true;
		}
		if(valid_move(get<0>(act.first)-2, get<1>(act.first)-2, get<2>(act.first)) && !visited[mk(get<0>(act.first)-2,get<1>(act.first)-2,get<2>(act.first))]) {
			Q.push({mk(get<0>(act.first)-2, get<1>(act.first)-2, get<2>(act.first)), act.second+1});
			visited[mk(get<0>(act.first)-2,get<1>(act.first)-2,get<2>(act.first))] = true;
		}
		if(valid_move(get<0>(act.first)-2, get<1>(act.first)+2, get<2>(act.first)) && !visited[mk(get<0>(act.first)-2,get<1>(act.first)+2,get<2>(act.first))]) {
			Q.push({mk(get<0>(act.first)-2, get<1>(act.first)+2, get<2>(act.first)), act.second+1});
			visited[mk(get<0>(act.first)-2,get<1>(act.first)+2,get<2>(act.first))] = true;
		}
		// 	Down
		if(valid_move(get<0>(act.first)+1, get<1>(act.first)-2, get<2>(act.first)) && !visited[mk(get<0>(act.first)+1,get<1>(act.first)-2,get<2>(act.first))]) {
			Q.push({mk(get<0>(act.first)+1, get<1>(act.first)-2, get<2>(act.first)), act.second+1});
			visited[mk(get<0>(act.first)+1,get<1>(act.first)-2,get<2>(act.first))] = true;
		}
		if(valid_move(get<0>(act.first)+1, get<1>(act.first)+2, get<2>(act.first)) && !visited[mk(get<0>(act.first)+1,get<1>(act.first)+2,get<2>(act.first))]) {
			Q.push({mk(get<0>(act.first)+1, get<1>(act.first)+2, get<2>(act.first)), act.second+1});
			visited[mk(get<0>(act.first)+1,get<1>(act.first)-2,get<2>(act.first))] = true;
		}
		if(valid_move(get<0>(act.first)+2, get<1>(act.first)-2, get<2>(act.first)) && !visited[mk(get<0>(act.first)+2,get<1>(act.first)-2,get<2>(act.first))]) {
			Q.push({mk(get<0>(act.first)+2, get<1>(act.first)-2, get<2>(act.first)), act.second+1});
			visited[mk(get<0>(act.first)+2,get<1>(act.first)-2,get<2>(act.first))] = true;
		}
		if(valid_move(get<0>(act.first)+2, get<1>(act.first)+2, get<2>(act.first)) && !visited[mk(get<0>(act.first)+2,get<1>(act.first)+2,get<2>(act.first))]) {
			Q.push({mk(get<0>(act.first)+2, get<1>(act.first)+2, get<2>(act.first)), act.second+1});
			visited[mk(get<0>(act.first)+2,get<1>(act.first)+2,get<2>(act.first))] = true;
		}		
		// Level (+/-) 1
		// 	level+1
		//		same row
		if(valid_move(get<0>(act.first), get<1>(act.first)+2, get<2>(act.first)+1) && !visited[mk(get<0>(act.first),get<1>(act.first)+2,get<2>(act.first)+1)]) {
			Q.push({mk(get<0>(act.first), get<1>(act.first)+2, get<2>(act.first)+1), act.second+1});
			visited[mk(get<0>(act.first),get<1>(act.first)+2,get<2>(act.first)+1)] = true;
		}
		if(valid_move(get<0>(act.first), get<1>(act.first)-2, get<2>(act.first)+1) && !visited[mk(get<0>(act.first),get<1>(act.first)-2,get<2>(act.first)+1)]) {
			Q.push({mk(get<0>(act.first), get<1>(act.first)-2, get<2>(act.first)+1), act.second+1});
			visited[mk(get<0>(act.first),get<1>(act.first)-2,get<2>(act.first)+1)] = true;
		}
		//		same col
		if(valid_move(get<0>(act.first)+2, get<1>(act.first), get<2>(act.first)+1) && !visited[mk(get<0>(act.first)+2,get<1>(act.first),get<2>(act.first)+1)]) {
			Q.push({mk(get<0>(act.first)+2, get<1>(act.first), get<2>(act.first)+1), act.second+1});
			visited[mk(get<0>(act.first)+2,get<1>(act.first),get<2>(act.first)+1)] = true;
		}
		if(valid_move(get<0>(act.first)-2, get<1>(act.first), get<2>(act.first)+1) && !visited[mk(get<0>(act.first)-2,get<1>(act.first),get<2>(act.first)+1)]) {
			Q.push({mk(get<0>(act.first)-2, get<1>(act.first), get<2>(act.first)+1), act.second+1});
			visited[mk(get<0>(act.first)-2,get<1>(act.first),get<2>(act.first)+1)] = true;
		}
		//  level-1
		if(valid_move(get<0>(act.first), get<1>(act.first)+2, get<2>(act.first)-1) && !visited[mk(get<0>(act.first),get<1>(act.first)+2,get<2>(act.first)-1)]) {
			Q.push({mk(get<0>(act.first), get<1>(act.first)+2, get<2>(act.first)-1), act.second+1});
			visited[mk(get<0>(act.first),get<1>(act.first)+2,get<2>(act.first)-1)] = true;
		}
		if(valid_move(get<0>(act.first), get<1>(act.first)-2, get<2>(act.first)-1) && !visited[mk(get<0>(act.first),get<1>(act.first)-2,get<2>(act.first)-1)]) {
			Q.push({mk(get<0>(act.first), get<1>(act.first)-2, get<2>(act.first)-1), act.second+1});
			visited[mk(get<0>(act.first),get<1>(act.first)-2,get<2>(act.first)-1)] = true;
		}
		//		same col
		if(valid_move(get<0>(act.first)+2, get<1>(act.first), get<2>(act.first)-1) && !visited[mk(get<0>(act.first)+2,get<1>(act.first),get<2>(act.first)-1)]) {
			Q.push({mk(get<0>(act.first)+2, get<1>(act.first), get<2>(act.first)-1), act.second+1});
			visited[mk(get<0>(act.first)+2,get<1>(act.first),get<2>(act.first)-1)] = true;
		}
		if(valid_move(get<0>(act.first)-2, get<1>(act.first), get<2>(act.first)-1) && !visited[mk(get<0>(act.first)-2,get<1>(act.first),get<2>(act.first)-1)]) {
			Q.push({mk(get<0>(act.first)-2, get<1>(act.first), get<2>(act.first)-1), act.second+1});
			visited[mk(get<0>(act.first)-2,get<1>(act.first),get<2>(act.first)-1)] = true;
		}		
		// Level (+/-) 2
		//	 up 
		//		same row
		if(valid_move(get<0>(act.first), get<1>(act.first)+1, get<2>(act.first)+2) && !visited[mk(get<0>(act.first),get<1>(act.first)+1,get<2>(act.first)+2)]) {
			Q.push({mk(get<0>(act.first), get<1>(act.first)+1, get<2>(act.first)+2), act.second+1});
			visited[mk(get<0>(act.first),get<1>(act.first)+1,get<2>(act.first)+2)] = true;
		}
		if(valid_move(get<0>(act.first), get<1>(act.first)-1, get<2>(act.first)+2) && !visited[mk(get<0>(act.first),get<1>(act.first)-1,get<2>(act.first)+2)]) {
			Q.push({mk(get<0>(act.first), get<1>(act.first)-1, get<2>(act.first)+2), act.second+1});
			visited[mk(get<0>(act.first),get<1>(act.first)-1,get<2>(act.first)+2)] = true;
		}
		//		same col
		if(valid_move(get<0>(act.first)+1, get<1>(act.first), get<2>(act.first)+2) && !visited[mk(get<0>(act.first)+1,get<1>(act.first),get<2>(act.first)+2)]) {
			Q.push({mk(get<0>(act.first)+1, get<1>(act.first), get<2>(act.first)+2), act.second+1});
			visited[mk(get<0>(act.first)+1,get<1>(act.first),get<2>(act.first)+2)] = true;
		}
		if(valid_move(get<0>(act.first)-1, get<1>(act.first), get<2>(act.first)+2) && !visited[mk(get<0>(act.first)-1,get<1>(act.first),get<2>(act.first)+2)]) {
			Q.push({mk(get<0>(act.first)-1, get<1>(act.first), get<2>(act.first)+2), act.second+1});
			visited[mk(get<0>(act.first)-1,get<1>(act.first),get<2>(act.first)+2)] = true;
		}
		//  down
		if(valid_move(get<0>(act.first), get<1>(act.first)+1, get<2>(act.first)-2) && !visited[mk(get<0>(act.first),get<1>(act.first)+1,get<2>(act.first)-2)]) {
			Q.push({mk(get<0>(act.first), get<1>(act.first)+1, get<2>(act.first)-2), act.second+1});
			visited[mk(get<0>(act.first),get<1>(act.first)+1,get<2>(act.first)-2)] = true;
		}
		if(valid_move(get<0>(act.first), get<1>(act.first)-1, get<2>(act.first)-2) && !visited[mk(get<0>(act.first),get<1>(act.first)-1,get<2>(act.first)-2)]) {
			Q.push({mk(get<0>(act.first), get<1>(act.first)-1, get<2>(act.first)-2), act.second+1});
			visited[mk(get<0>(act.first),get<1>(act.first)-1,get<2>(act.first)-2)] = true;
		}
		//		same col
		if(valid_move(get<0>(act.first)+1, get<1>(act.first), get<2>(act.first)-2) && !visited[mk(get<0>(act.first)+1,get<1>(act.first),get<2>(act.first)-2)]) {
			Q.push({mk(get<0>(act.first)+1, get<1>(act.first), get<2>(act.first)-2), act.second+1});
			visited[mk(get<0>(act.first)+1,get<1>(act.first),get<2>(act.first)-2)] = true;
		}
		if(valid_move(get<0>(act.first)-1, get<1>(act.first), get<2>(act.first)-2) && !visited[mk(get<0>(act.first)-1,get<1>(act.first),lvl-2)]) {
			Q.push({mk(get<0>(act.first)-1, get<1>(act.first), get<2>(act.first)-2), act.second+1});
			visited[mk(get<0>(act.first)-1,get<1>(act.first),get<2>(act.first)-2)] = true;
		}		
	}
	return -1; 
}

int main()
{
	scanf("%d%d%d", &N, &M, &L);
	
	int i, j, k; // origem
	
	scanf("%d%d%d", &i, &j, &k);
	
	int l, m, n; // destino
	
	scanf("%d%d%d", &l, &m, &n);
	
	printf("%d\n", BFS(i, j, k, l, m, n));
}


/* Horse Moviments
 * Same level - 8
 * 		up coord:
 * 			row-1 and col-/+2 
 *  		row-2 and col-/+1
 * 		down cord:
 *   		row+1 and col-/+2
 * 			row+2 and col-/+1
 * Level +/- 1
 * 		up level:
 * 			same row:
 * 				col+/-2
 * 			same col:
 * 				row+/-2
 * 		down level:
 *   			same row:
 * 				col+/-2
 * 			same col:
 * 	 			row+/-2
 * Level +/- 2
 * 		up level : adj
 * 		down level : adj
 * */
