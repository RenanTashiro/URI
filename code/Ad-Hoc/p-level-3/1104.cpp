/*
Nome:      Troca de Cartas
ID:        1104
Resposta:  Accepted
Linguagem: C++
Tempo:     0.052s
Tamanho:   876 Bytes
Submissao: 02/08/16 13:43:28
*/
#include <cstdio>
#include <set>

class PokemonSwapCards2000
{
	public:
		int swap_count(std::set<int> a, std::set<int> b);
};

int PokemonSwapCards2000::swap_count(std::set<int> a, std::set<int> b)
{
	int ca = 0, cb = 0;
	
	for(std::set<int>::iterator it = a.begin(); it != a.end(); ++it)
		if(b.find(*it) == b.end())
			ca++;
	
	for(std::set<int>::iterator it = b.begin(); it != b.end(); ++it)
		if(a.find(*it) == a.end())
			cb++;	
		
	return std::min(ca, cb);
}

int main()
{
	int A, B;
	
	while(scanf("%d%d", &A, &B) && A != 0)
	{
		std::set<int> alice, beatriz;
		int card;
		
		for(int i = 0; i < A; i++)
			scanf("%d", &card), alice.insert(card);
			
		for(int i = 0; i < B; i++)
			scanf("%d", &card), beatriz.insert(card);
		
		PokemonSwapCards2000 solution;
		
		printf("%d\n", solution.swap_count(alice, beatriz));
	}
}
