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
