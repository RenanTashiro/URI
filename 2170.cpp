#include <bits/stdc++.h>

using namespace std;

int main()
{
	double X, Y;
	int project_id = 1;
	
	while(scanf("%lf%lf", &X, &Y) != EOF)
	{
		printf("Projeto %d:\n", project_id++);
		printf("Percentual dos juros da aplicacao: %.2lf %%\n\n", Y * 100.00 / X - 100.00);
	}
}
