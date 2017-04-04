#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float salario, taxa;
    cin >> salario;

if(0 < salario && salario <= 2000.00){
    cout << "Isento" << endl;
}
if(2000.01 < salario && salario <= 3000.00){
    taxa = (salario - 2000.00)  * 0.08;
    cout << setiosflags(ios::fixed) << setprecision(2) << "R$ " << taxa << endl;
}
if(3000.01 < salario && salario <= 4500.00){
    taxa = (1000 * 0.08) + (salario - 3000) * 0.18;
    cout << setiosflags(ios::fixed) << setprecision(2) << "R$ " << taxa << endl;
}
if(4500 < salario){
    taxa = (1000 * 0.08) + (1500 * 0.18) + ((salario - 4500) * 0.28);
    cout << setiosflags(ios::fixed) << setprecision(2) << "R$" << taxa << endl;
}
}
