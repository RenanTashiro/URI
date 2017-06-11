#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

int manhatten_distance(ii a, ii b)
{
	return abs(a.first-b.first) + abs(a.second-b.second);
}

ii solve(ii u, vector<ii> steak_house)
{
	ii toCall(0,0);
	int min_distance = INT_MAX;
	
	for(ii v : steak_house) 
	{
		if(abs(v.first - u.first) > min_distance) break;
		else if(v.second > min_distance) continue;
		
		int distance = manhatten_distance(u, v);
				
		if(distance < min_distance) {
			min_distance = distance;
			toCall = v;
		}
	}
	
	return toCall;
}

int main()
{
	int N, M, instancia = 1;
	set<int> setX, setY;
	
	while(scanf("%d%d", &N, &M))
	{
		if(N == 0 && M == 0) break;
		if(instancia > 1) puts("");
		
		int K, L, x, y;
		vector<ii> steak_houseX, steak_houseY;
		
		scanf("%d", &K);
		
		for(int i = 0; i < K; i++) {
			scanf("%d%d", &x, &y);
			setX.insert(x), setY.insert(y);
			steak_houseX.push_back(ii(x, y));
			steak_houseY.push_back(ii(y, x));
		}
		
		if(setX.size() < setY.size())
			sort(steak_houseY.begin(), steak_houseY.end());
		else 
			sort(steak_houseX.begin(), steak_houseX.end());
			
		scanf("%d", &L);
		
		printf("Instancia %d\n", instancia++);
					
		for(int i = 0; i < L; i++) {
			scanf("%d%d", &x, &y);
			if(setX.size() < setY.size()) {
				ii v = solve(ii(y, x), steak_houseY);
				printf("%d %d\n", v.second, v.first);
			}		
			else {
				ii v = solve(ii(x, y), steak_houseX);
				printf("%d %d\n", v.first, v.second);
			}
		}				
	}
}
