#include <bits/stdc++.h>

using namespace std;

ofstream out("1220.out");

int main()
{
	int N;
	
	while(scanf("%d", &N) && N != 0)
	{
		double value;
		int arr[N], total = 0, ans = 0, remain;
		
		for(int i = 0; i < N; i++) {
			scanf("%lf", &value);
			arr[i] = value * 100;
			total += arr[i];
		}
				
		printf("total: %d div: %d resto: %d\n", total, total / N, total % N);
		remain = total % N;
		total /= N; total++;
		
		for(int i = 0; i < N; i++) {
			if(remain == 0) {
				total--;
			}
			if(total < arr[i]) {
				ans += arr[i] - total;	
				remain--;
			}
		}
		
		printf("$%d\n", ans);
		out << fixed << setprecision(2) << ans / 100.0 << endl;
	}
}
