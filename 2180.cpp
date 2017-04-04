#include <bits/stdc++.h>

using namespace std;

int velocidade(int peso)
{
	int sum = 0, act_number = peso;
	
	for(int i = 0; i < 10; i++)
	{
		for(int j = act_number; ; j++)
		{
			bool flag = true;
			
			for(int k = 2; k < j / 2; k++)
				if(j % k == 0) {
					flag = false;
					break;
				}
			
			if(flag) {
				act_number = j + 1;
				sum += j;
				break;
			}
		}
	}
	
	return sum;
}

int main()
{
	int peso;
	
	scanf("%d", &peso);
	
	int vel = velocidade(peso);
	int total_horas = 60000000 / vel;
	
	printf("%d km/h\n", vel);
	printf("%d h / %d d\n", total_horas, total_horas / 24);
}
