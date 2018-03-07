/*
Nome:      Conversão de Tempo
ID:        1019
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   405 Bytes
Submissao: 09/05/16 14:23:03
*/
#include <iostream>

using namespace std;

class Time
{
private:
	int time; 
public:
	Time(int t);
	void hms();
};

Time::Time(int t)
{
	time = t;
}

void Time::hms()
{
	int tmp = time;
	int h = tmp / 3600; tmp %= 3600;	
	int m = tmp / 60; tmp %= 60;
	cout << h << ':' << m << ':' << tmp << endl;
}

int main()
{
	int N;
	
	cin >> N;
	
	Time time(N);
		
	time.hms();
}
