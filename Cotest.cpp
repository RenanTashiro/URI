#include <iostream>
using namespace std;

int main()
{
unsigned long int Counter;
unsigned long int result = 0;
unsigned long int numa, numb, numc;
numa = 0;
numb = 0;
numc = 1;
unsigned long int number;
cout << "Qual o numero que desejas conhecer da sequencia tribonacci?" << endl <> number;
cout << endl << endl;
for(Counter = 0; Counter < number – 1; Counter++)
{
result = numa + numb + numc;
numa = numb;
numb = numc;
numc = result;
}
cout << "O Valor Tribonacci do numero " << number << " e igual a: " << result;
return 0;
}
