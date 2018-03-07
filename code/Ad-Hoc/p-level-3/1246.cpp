/*
Nome:      Estacionamento
ID:        1246
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.040s
Tamanho:   2,2 KB
Submissao: 11/01/18 11:17:49
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int C, N;
	
	while(scanf("%d%d", &C, &N) != EOF)
	{
		string op;
		int id, length, count = 0;
		
		pair<int,int> parking[C+1];
		map<int,pair<int,int>> reg;
		
		parking[0].first = 0; // 0=NaoOcupado 1=Ocupado
		parking[0].second = C; // park length
		
		parking[C].first = -1;
		parking[C].second = -1;
		
		for(int i = 0; i < N; i++)
		{
			cin >> op;	
			
			if(op == "C")
			{
				scanf("%d%d", &id, &length);
				
				int pos = 0, l = 0, start_pos = 0;
				
				while(pos < C)
				{
					int next_pos = pos + parking[pos].second;
					//~ cout << "start_pos=" << start_pos  << ' ' << next_pos << endl;
					
					if(parking[pos].first == 0) {
						l += parking[pos].second;
						
						if(l >= length) {
							// marca parte do espaco como sen usado
							//~ parking[pos].first = 1;
							//~ parking[pos].second = length;
							parking[start_pos].first = 1;
							parking[start_pos].second = length;
							
							// atualiza o que sobrou do espaco disponivel
							//~ parking[pos+length].first = 0;
							//~ parking[pos+length].second = l - length;
							if(l - length != 0) {
								parking[start_pos+length].first = 0;
								parking[start_pos+length].second = l - length;
							}
							
							//~ cout << "memo " << id << " at " << start_pos << " with length " << length << endl;
							reg[id] = {start_pos, length};
							count++;
							break;
						}
					} else {
						l = 0;
						start_pos = next_pos;
					}
					
					pos = next_pos;
					//~ cout << "i=" << i << " pos=" << pos << endl;
					//~ cout << "status= " << parking[pos].first << " length=" << parking[pos].second << endl;
				}
			}
			else
			{
				scanf("%d", &id);
				
				pair<int,int> info = reg[id]; reg.erase(id);			
				
				//~ cout << "Leaving " << info.first << " with length " << info.second << endl;
				
				parking[info.first].first = 0;
				parking[info.first].second = info.second;
			}
			
			//~ for(int i = 0; i < C; i++)
			//~ {
				//~ printf("[%d](%d, %d) ", i, parking[i].first, parking[i].second);
			//~ }
			
			//~ puts("");
		}
		
		printf("%d\n", count * 10);
	}
}
