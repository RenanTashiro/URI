#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Biggest 
{
private:
	vector<T> seq;
public:
	Biggest(vector<T> seq);
	T biggest();
};

template <class T>
Biggest<T>::Biggest(vector<T> seq)
{
	this->seq = seq;
}

template <class T>
T Biggest<T>::biggest()
{
	T bigger = seq[0];
	
	for(T i : seq)
	{
		if(bigger < i)
		{
			bigger = i;
		}
	}
	
	return bigger;
}

int main()
{
	
	vector<int> v(3);
	
	cin >> v[0] >> v[1] >> v[2];
	
	Biggest<int> B(v);
	
	cout << B.biggest() << " eh o maior" << endl;
}
