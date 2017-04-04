#include <bits/stdc++.h>

using namespace std;

// Geometry Libary
struct pot {
	double x, y;
	pot() : x(0), y(0) {}
	pot(double _x, double _y) : x(_x) , y(_y) {}
};

struct vec {
	double x, y;
	vec(double _x, double _y) : x(_x) , y(_y) {}
};

double dist(pot a, pot b) {
	return hypot(a.x - b.x, a.y - b.y);
}

vec toVec(pot a, pot b) {
	return vec(b.x - a.x, b.y - a.y);
}

vec scale(vec v, double s) {
	return vec(v.x * s, v.y * s);
}

pot translate(pot p, vec v) {
	return pot(p.x + v.x, p.y + v.y);
}

double dot(vec a, vec b) {
	return (a.x * b.x + a.y * b.y);
}

double norm_sq(vec v) {
	return v.x * v.x + v.y + v.y;
}

double dist2line(pot p, pot a, pot b)
{
	// formula: c = a + u * ab
	vec ap = toVec(a, p), ab = toVec(a, b);
	double u = dot(ap, ab) / norm_sq(ab);
	pot c = translate(a, scale(ab, u));
	cout << dist(a, c) << ' ' << dist(b, c) << ' ' << dist(b, a) << endl;
	return dist(a, c);
}

// Problem functions
pot LatLong2point(double lt, double lg) {
	return pot(6378*cos(lg*M_PI/180)*cos(lt*M_PI/180), 6378*sin(lg*M_PI/180)*cos(lt*M_PI/180));
}

int main()
{
	//cout << dist2line(LatLong2point(39.883, -75.250), LatLong2point(48.700, 10.500), LatLong2point(47.700, 9.500)) << endl;
	//cout << dist(LatLong2point(48.700, 10.500), LatLong2point(47.700, 9.500)) / 2 << endl;
	string name;
	double lat, lon;

	map<string,pot> store;
	
	while(cin >> name) {
		if(name == "#") break;
		cin >> lat >> lon;
		store[name] = LatLong2point(lon, lat);;
	}
	
	string a, b, p;
	
	while(cin >> a) {
		if(a == "#") break;
		cin >> b >> p;		
		dist2line(store[p], store[a], store[b]);
	}
}
/*
Ulm 48.700 10.500
Freiburg 47.700 9.500
Philadelphia 39.883 -75.250
SanJose 37.366 -121.933
Atlanta 33 -84
Eindhoven 52 6
Orlando 28 -82
Vancouver 49 -123
Honolulu 22 -157
NorthPole 90 0
SouthPole -90 0
#
NorthPole SouthPole NorthPole
*/
