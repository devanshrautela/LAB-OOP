#include <iostream>
using namespace std;
template <typename T>
T add(T x,T y)
{
	return x+y;
}

int main()
{
	cout << add<double>(3.4,7.3) << endl;
	return 0;
}