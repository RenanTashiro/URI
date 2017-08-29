/*
Nome:      Área
ID:        1012
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,01 KB
Submissao: 25/04/16 20:19:03
*/
#include <iostream>

using namespace std;

class Area 
{
private:
	double PI = 3.14159;
public:
	double triangle(double b, double h);
	double circle(double r);
	double trapeze(double B, double b, double h);
	double square(double s);
	double rectangle(double b, double h);
};

double Area::triangle(double b, double h)
{
	return (b * h) / 2.0;
}

double Area::circle(double r)
{
	return PI * r * r;
}

double Area::trapeze(double B, double b, double h)
{
	return (B + b) * h / 2.0;
}

double Area::square(double s)
{
	return s * s;
}

double Area::rectangle(double b, double h)
{
	return b * h;
}

int main()
{
	Area area;
	double a, b, c;
	
	cin >> a >> b >> c;
	
	cout.setf(ios::fixed);
	cout.precision(3);
	cout << "TRIANGULO: " << area.triangle(a, c) << endl;
	cout << "CIRCULO: " << area.circle(c) << endl;
	cout << "TRAPEZIO: " << area.trapeze(a, b, c) << endl;
	cout << "QUADRADO: " << area.square(b) << endl;
	cout << "RETANGULO: " << area.rectangle(a, b) << endl;
}
