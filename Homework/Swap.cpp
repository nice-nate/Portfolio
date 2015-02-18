#include <iostream>
using namespace std;

int main()
{
	int a, b;
	a=4;
	b=6;

	cout << a << " " << b << endl;

	swap(a,b);

	cout << a << " " << b << endl;

	return 0;
}

void swap(int x, int y)
{
	int c=x;
	x=y;
	y=c;
}