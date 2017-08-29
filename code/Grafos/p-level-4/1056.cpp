/*
Nome:      Fatores e Múltiplos
ID:        1056
Resposta:  Accepted
Linguagem: C++
Tempo:     0.176s
Tamanho:   1,54 KB
Submissao: 19/12/16 13:49:37
*/
// Autor: Renan Tashiro
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
 
typedef vector<vector<bool>> vvb; // vbb[M][N]
 
bool bpm(vvb bpGraph, int u, bool seen[], int matchR[])
{
    for(int v = 0; v < (int)bpGraph[u].size(); v++)
    {
        if(bpGraph[u][v] && !seen[v])
        {
            seen[v] = true;
 
            if(matchR[v] < 0 || bpm(bpGraph, matchR[v], seen, matchR))
            {
                matchR[v] = u;
                return true;
            }
        }
    }
    
    return false;
}
 
int maxBPM(vvb bpGraph)
{
    int matchR[bpGraph[0].size()];
 
    memset(matchR, -1, sizeof(matchR));
 
    int result = 0;
    for(int u = 0; u < (int)bpGraph.size(); u++)
    {
        bool seen[bpGraph[u].size()];
        memset(seen, 0, sizeof(seen));
 
        if(bpm(bpGraph, u, seen, matchR))
            result++;
    }
    
    return result;
}

int main()
{	
	int T;
	
	cin >> T;
	
	for(int t = 1; t <= T; t++)
	{		
		vector<int> A, B;
		int m, n, v;
		
		cin >> m;
		
		for(int i = 0; i < m; i++) {
			cin >> v;
			A.push_back(v);
		}
		
		cin >> n;
		
		if(n == 0 && m == 0) {
			cout << "Case " << t << ": 0" << endl; 
		}
		else {
			vvb bpGraph(m, vector<bool>(n));
			
			for(int j = 0; j < n; j++) {
				cin >> v;
				for(int i = 0; i < m; i++) {
					if(A[i] == 0)	bpGraph[i][j] = v == 0;				
					else 			bpGraph[i][j] = v % A[i] == 0;
				}
			}					 
		 
			cout << "Case " << t << ": " << maxBPM(bpGraph) << endl; 
		}
	}
}
