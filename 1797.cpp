#include <bits/stdc++.h>

using namespace std;

double ax, bx, ay, by;

pair<double,double> right(double angle, double x, double y, double l)
{
	if(angle <= 45 && angle >= -45) {
		cout << x << '-' << y << endl;
		return make_pair(x-l, ax*(x-l)+bx);
	}
	else if(angle > 45.0) {
		cout << x << '?' << y << endl;
		return make_pair(ay*(y-l)+by, y-l);
	}
	else {
		cout << x << '!' << y << endl;
		return make_pair(ay*(y+l)+by, y+l);
	}
}


pair<double,double> left(double angle, double x, double y, double l)
{
	if(angle <= 45 && angle >= -45) {
		cout << x << '*'<< y << endl;
		return make_pair(x+l, ax*(x+l)+bx);		
	}
	else if(angle > 45.0) {
		cout << x << '@'<< y << endl;
		return make_pair(ay*(y+l)+by, y+l);
	}
	else {
		cout << x << '/'<< y << endl;
		return make_pair(ay*(y-l)+by, y-l);
	}
}

double dist(double x[], double y[], double l[])
{
	if(x[1] == x[0] || y[1] == y[0]) {
		return l[0]+l[1];
	}
	
	double angle = atan((double)(y[1]-y[0])/(x[1]-x[0]))*180/M_PI; 
	pair<double,double> rht, lft;
	
	ax = (y[1]-y[0])/(x[1]-x[0]);
	bx = y[0]-ax*x[0];
	ay = (x[1]-x[0])/(y[1]-y[0]);
	by = x[0]-ay*y[0];
	
	printf("%.1lfx+%.2lf / %.1lfy+%.1lf (%.1lf*)\n", ax, bx, ay, by, angle);
	
	if(x[0] < x[1]) {
		rht = right(angle, x[1], y[1], l[1]);
		lft = left(angle, x[0], y[0], l[0]);		
	}
	else {
		rht = right(angle, x[0], y[0], l[0]);
		lft = left(angle, x[1], y[1], l[1]);
	}
	
	cout << rht.first << ' ' << rht.second << endl;
	cout << lft.first << ' ' << lft.second << endl;
	cout << hypot(rht.first-lft.first, rht.second-lft.second) << endl;
	return hypot(rht.first-lft.first, rht.second-lft.second);
}

int main()
{
	int N, AAH;
	
	scanf("%d%d", &N, &AAH);
	
	double X[2], Y[2], L[2];
	bool flag = true;
	
	scanf("%lf%lf%lf", &X[0], &Y[0], &L[0]);	
	L[0] /= 2;
	
	for(int i = 1; i < N; i++) {
		scanf("%lf%lf%lf", &X[1], &Y[1], &L[1]);
		L[1] /= 2;
		if(flag && (double)AAH - dist(X, Y, L) < 0.0) {
			flag = false;	
		}
		X[0] = X[1], Y[0] = Y[1], L[0] = L[1];
	}
	
	printf("%s\n", flag ? "YEAH" : "OUCH");
}
