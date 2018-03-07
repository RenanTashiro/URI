/*
Nome:      Consumo
ID:        1014
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   935 Bytes
Submissao: 25/04/16 22:00:04
*/
#include <iostream>
#include <vector>

using namespace std;

class Consumo 
{
private:
	vector<int> distancia;
	vector<double> litros;
public:
	void atualiza(int distancia, double litros);
	double consumo(int dia);
	double consumo();	
};

void Consumo::atualiza(int distancia, double litros)
{
	this->distancia.push_back(distancia);;
	this->litros.push_back(litros);
}

double Consumo::consumo(int dia)
{
	if(dia >= 0 and dia < int(litros.size()))	
		return double(distancia[dia]) / litros[dia];
	else
		return -1;
}

double Consumo::consumo()
{
	int d = 0;
	double l = 0.0;
	
	for(int i = 0; i < int(litros.size()); i++)
	{
		d += distancia[i];
		l += litros[i];
	}
	
	return d / l;
}

int main()
{
	Consumo consumo;
	int X;
	double Y;
	
	cin >> X >> Y;
	
	consumo.atualiza(X, Y);
	
	cout.setf(ios::fixed);
	cout.precision(3);
	cout << consumo.consumo() << " km/l" << endl;
}
