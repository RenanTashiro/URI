/*
Nome:      Cédulas
ID:        1018
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   610 Bytes
Submissao: 09/05/16 14:22:01
*/
#include <iostream>

using namespace std;

class Dinheiro
{
private:
	int valor;
public:
	Dinheiro(int v);
	void fatorar();
};

Dinheiro::Dinheiro(int v)
{
	valor = v;
}

void Dinheiro::fatorar()
{
	const int NUMERO_NOTA = 7;
	int nota[NUMERO_NOTA] = {100, 50, 20, 10, 5, 2, 1}, tmp = valor;
	
	cout << tmp << endl;
	
	for(int i = 0; i < NUMERO_NOTA; i++)
	{
		int numero = tmp / nota[i];
		cout << numero << " nota(s) de R$ " << nota[i] << ",00" << endl;		
		tmp %= nota[i]; 
	}
}

int main()
{
	int N;
	
	cin >> N;
	
	Dinheiro dinheiro(N);
	
	dinheiro.fatorar();
}
