#include <iostream>
using namespace std;

int main()
{
	int grade;

	cout << "Enter an integer grade between 50 and 100."
		<< " Press return. " << endl;
	cin >> grade;

	if(grade >= 80)
	cout << "Congratulations!" << endl;

	else if(grade >= 70)
	cout << "Average " << endl;

	else
	cout << "Try Harder" << endl;
	return 0;
}