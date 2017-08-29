/*
Nome:      Trenós do Papai Noel
ID:        1762
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,03 KB
Submissao: 08/04/16 16:15:50
*/
#include <bits/stdc++.h>

using namespace std; 

#define MAX_TOY_LENGTH 1000

int main()
{
	int Y; // Testes
	
	scanf("%d", &Y);
	
	while(Y--)
	{
		int T; // Tamanho da lista
		map<string, double> toy_list;
		
		scanf("%d", &T);
		
		for(int i = 0; i < T; i++) {
			char toy[MAX_TOY_LENGTH];
			double price;
			
			scanf(" %[^\n]%lf", toy, &price);
			
			toy_list[toy] = price;
		}
		
		double M, weight = 0.0; // Capacidade do treno e peso total
		char gift[MAX_TOY_LENGTH] = "0";
		int qtd;
		
		scanf("%lf", &M);
		
		vector<string> not_in;
		
		while(true) {
			scanf(" %[^\n]%d", gift, &qtd);
			
			if(strcmp(gift, "-") == 0 && qtd == 0) {
				break;
			}

			double value = toy_list[gift];
			
			if(value == 0.0) {
				not_in.push_back(gift);
			}
			else {
				weight += value * qtd;
			}
		}
		
		for(auto i : not_in) {
			cout << "NAO LISTADO: " << i << endl;
		}
		
		printf("Peso total: %.2lf kg\n", weight);
		printf("Numero de trenos: %d\n\n", (int)ceil(weight / M));		
	}
}
