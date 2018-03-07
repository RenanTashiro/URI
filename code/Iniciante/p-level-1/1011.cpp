/*
Nome:      Esfera
ID:        1011
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   519 Bytes
Submissao: 25/04/16 20:08:35
*/
#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.14159

using namespace std;

class Esfera 
{
private:
	double raio;
public:
	double vol();
	double getRaio();
	void setRaio();
};

double Esfera::vol()
{
	return (4/3.0) * PI * pow(raio, 3);
}

double Esfera::getRaio()
{
	return raio;
}

void Esfera::setRaio()
{
	cin >> raio;
}

int main()
{
	Esfera esfera;
	
	esfera.setRaio();
	
	cout << fixed << setprecision(3) << "VOLUME = " << esfera.vol() << endl;
}
