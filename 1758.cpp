#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;

	scanf("%d", &T);
	
	while(T--)
	{
		int P, N;
		
		scanf("%d%d", &P, &N);
		
		int average, greatest, greatest_sub_7;
		double value;
		
		for(int i = 0; i < N; i++) {
			greatest = average = greatest_sub_7 = 0;
			for(int j = 0; j < P; j++) {
				scanf("%lf", &value);
				int valuei = floor(value * 100.0);
				average += valuei;
				greatest = max(greatest, valuei);
				if(valuei < 700) greatest_sub_7 = max(greatest_sub_7, valuei);
			}
			cout << average << endl;
			int up = ceil((double)average/P), down = floor((double)average/P);
			if(up != 700 && up != 400) average = up;
			else 					   average = down;
			if(average < 400) {
				printf("%.2lf\n", average / 100.0);
			} 
			else if(average < 700) {
				if(greatest_sub_7 > average) {					
					printf("%.2lf**\n", greatest_sub_7 / 100.0);
				}
				else {
					printf("%.2lf\n", average / 100.0);				
				}
			}
			else {
				printf("%.2lf\n", greatest / 100.0);
			}
		}			
	}
}
