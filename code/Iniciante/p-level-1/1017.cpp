/*
Nome:      Gasto de Combustível
ID:        1017
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   484 Bytes
Submissao: 09/05/16 14:00:51
*/
#include <iostream>
#include <iomanip>

using namespace std;

class Carro
{
private:
	int eficiencia;
public:
	Carro(int e);
	double gasto(int tempo, int velmedia);
};

Carro::Carro(int e)
{
	eficiencia = e;
}

double Carro::gasto(int tempo, int velmedia)
{
	return  double(tempo * velmedia) / eficiencia;
}

int main()
{
	Carro car(12);
	int tempo, vel;
	
	cin >> tempo >> vel;
	
	cout << fixed << setprecision(3) << car.gasto(tempo, vel) << endl;
}
