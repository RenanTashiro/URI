/*
Nome:      Idade em Dias
ID:        1020
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   469 Bytes
Submissao: 09/05/16 14:28:23
*/
#include <iostream>

using namespace std;

class Time
{
private:
	int day;
public:
	Time(int d);
	void ymd();
};

Time::Time(int d)
{
	day = d;
}

void Time::ymd()
{
	int tmp = day;
	int year = tmp / 365; tmp %= 365;
	int month = tmp / 30; tmp %= 30;
	cout << year << " ano(s)" << endl;
	cout << month << " mes(es)" << endl;
	cout << tmp << " dia(s)" << endl;
}

int main()
{
	int N;
	
	cin >> N;
	
	Time time(N);
	
	time.ymd();
}
