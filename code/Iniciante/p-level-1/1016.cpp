/*
Nome:      Distância
ID:        1016
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   501 Bytes
Submissao: 09/05/16 13:54:31
*/
#include <iostream>
#include <cstdlib>

using namespace std;

class Car 
{
private:
	int speed;
public:
	Car(int s);
	int getSpeed();
	int time(int distance);
};

Car::Car(int s)
{
	speed = s;
}

int Car::getSpeed()
{
	return speed;
}

int Car::time(int distance)
{
	return 60 * distance / speed;
}

int main()
{
	Car X(60), Y(90);
	int distance;
	
	cin >> distance;
	
	cout << 60 * distance / (abs(X.getSpeed() - Y.getSpeed())) 
	     << " minutos" << endl;
}
