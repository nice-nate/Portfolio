#include <iostream>
using namespace std;

int main()
{
	int test1Score;
	int test2Score;
	int test3Score;

	cout << "Enter score for test 1: press return." << endl;
	cin >> test1Score;
	cout << "Enter score for test 2: press return." << endl;
	cin >> test2Score;
	cout << "Enter score for test 3: press return." << endl;
	cin >> test3Score;

	cout << "The three test scores are: " << endl;
	cout << test1Score << endl;
	cout << test2Score << endl;
	cout << test3Score << endl;
	
	if(test1Score > test2Score && test3Score)
		cout << " The value for test 1 is the highest: it is " << test1Score << endl;

	else if(test2Score >  test3Score && test1Score)
		cout << " The value for test 2 is the highest: it is " << test2Score << endl;

	else if(test3Score > test2Score && test1Score)
		cout <<" The value for test 3 is the highest: it is " << test3Score << endl;
	return 0;
}