/*
Nome:      Jogando Cartas Fora
ID:        1110
Resposta:  Accepted
Linguagem: C++
Tempo:     0.132s
Tamanho:   858 Bytes
Submissao: 01/08/16 14:21:09
*/
#include <iostream>
#include <queue>

using namespace std;

class CardGameSimulation
{
	public:
		CardGameSimulation(int n);
		void simulate();
	private:
		int n;
};

CardGameSimulation::CardGameSimulation(int n)
{
	this->n = n;
}

void CardGameSimulation::simulate()
{
	queue<int> memory;
	
	for(int i = 1; i <= n; i++)
		memory.push(i);
	
	cout << "Discarded cards:";
	
	if(n > 1)
	{
		cout << " " << memory.front();
		memory.pop();
		memory.push(memory.front());
		memory.pop();
	}
	
	while(memory.size() != 1)
	{
		cout << ", " << memory.front();
		memory.pop();
		memory.push(memory.front());
		memory.pop();
	}

	cout << "\nRemaining card: " << memory.front() << '\n';
}

int main()
{
	int N = 1;
	
	while(cin >> N && N != 0)
	{
		CardGameSimulation simulation(N);
		simulation.simulate();
	}
}
