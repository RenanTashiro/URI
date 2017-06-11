#include <bits/stdc++.h>

using namespace std;

double INF = 1e100;
double EPS = 1e-12;

struct PT {
	double x, y;
	PT() {}
	PT(double x, double y) : x(x), y(y) {}
	PT(const PT &p) : x(p.x), y(p.y) {}
	PT operator + (const PT &p) const { return PT(x+p.x, y+p.y); }
	PT operator - (const PT &p) const { return PT(x-p.x, y-p.y); }
	PT operator * (double c) const { return PT(x*c, y*c); }
	PT operator / (double c) const { return PT(x/c, y/c); }
};

double dot(PT p, PT q) { return p.x*q.x+p.y*q.y; }
double dist2(PT p, PT q) { return dot(p-q, p-q); }

PT ProjectPointLine(PT a, PT b, PT c) {
	return a + (b-a)*dot(c-a, b-a)/dot(b-a, b-a);
}

double DistancePointLine(PT a, PT b, PT c) {
	return sqrt(dist2(c, ProjectPointLine(a, b, c)));
}

bool isRight(PT a, PT b, PT c) {
	return ProjectPointLine(a, b, c).x < c.x;
}

int main()
{	
	int N;
	
	while(scanf("%d", &N) && N != 0) {
		vector<PT> points;
		int x, y;
		for(int i = 0; i < N; i++) {
			scanf("%d%d", &x, &y);
			points.push_back(PT(x, y));
		}
		double mindiff = DBL_MAX;
		for(int i = 0; i < N; i++) {
			for(int j = i+1; j < N; j++) {
				double left = 0.0, right = 0.0;
				for(int k = 0; k < N; k++) {
					if(k == i || k == j) 
						continue;
					if(isRight(points[i], points[j], points[k])) {
						right += DistancePointLine(points[i], points[j], points[k]);
					}
					else {
						left += DistancePointLine(points[i], points[j], points[k]);
					}
				}
				mindiff = min(mindiff, fabs(left - right));
			}
		}
		printf("%.3lf\n", mindiff);
	}		
}
