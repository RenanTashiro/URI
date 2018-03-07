/*
Nome:      Jogo dos Oito
ID:        2032
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     3.960s
Tamanho:   2,2 KB
Submissao: 11/07/17 19:12:39
*/
#include <bits/stdc++.h>

using namespace std;

struct Puzzle {
	string puzzle;
	struct Puzzle* father;
};

bool isAnswer(string p)
{
	return p == "123456780";
}

void printPuzzle(string p)
{
	cout << p[0] << p[1] << p[2] << "\n";
	cout << p[3] << p[4] << p[5] << "\n";
	cout << p[6] << p[7] << p[8] << "\n";
}

void bfs(string puzzle)
{
	queue<Puzzle> Q;
	unordered_map<string, bool> mem;

	Puzzle start; 
	
	start.puzzle = puzzle;
	start.father = NULL;

	Q.push(start);
	mem[puzzle] = true;
	
	while(!Q.empty())
	{
		Puzzle u = Q.front(); Q.pop();

		if(isAnswer(u.puzzle))
		{
			stack<string> answer;
			
			while(u.father != NULL) {
				answer.push(u.puzzle);
				u = *u.father;
			}
			
			if(answer.size() == 0)  {
				puts("Problema sem solucao");
			}
			else {
				printf("Quantidade minima de passos = %lu\n", answer.size());
				
				printPuzzle(answer.top());
				answer.pop();
				
				while(!answer.empty()) {
					puts("");
					printPuzzle(answer.top());
					answer.pop();
				}
			}
			
			return;
		}
				
		for(int i = 0; i < 9; i++)
		{
			if(u.puzzle[i] == '0')
			{
				Puzzle p; p.father = new Puzzle(u);				
				// UP
				if(i - 3 >= 0) {
					string v = u.puzzle;					
					swap(v[i], v[i-3]);
					p.puzzle = v;
					if(!mem[v]) {
						Q.push(p);
						mem[v] = true;
					}
				}				
				// DOWN
				if(i + 3 < 9) {
					string v = u.puzzle;
					swap(v[i], v[i+3]);
					p.puzzle = v;	
					if(!mem[v]) {
						Q.push(p);
						mem[v] = true;
					}											
				}			
				// LEFT
				if(i != 0 && i != 3 && i != 6) {
					string v = u.puzzle;
					swap(v[i], v[i-1]);						
					p.puzzle = v;
					if(!mem[v]) {
						Q.push(p);
						mem[v] = true;
					}						
				}				
				// RIGHT
				if(i != 2 && i != 5 && i != 8) {
					string v = u.puzzle;
					swap(v[i], v[i+1]);
					p.puzzle = v;						
					if(!mem[v]) {
						Q.push(p);
						mem[v] = true;
					}
				}
				
				break;
			}
		}
	}

	puts("Problema sem solucao");
}

int main()
{
	string puzzle;
	
	while(cin >> puzzle)
	{
		string con, cat;
		
		cin >> con >> cat;
		
		puzzle += con + cat;
		
		bfs(puzzle);
	}
}

