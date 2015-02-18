/*
This program loop(s) to control and output a star pattern as follows : giving a 
integer N(use cin to assign N), first, will print a triangle with N rows, 
the star number in each row equals the row number(e.g.the 1st row has 1 star, 
the Nth row has N stars).Then the program will output a reverse triangle with
(N - 1) row, the first row of the reverse triangle has(N - 1) stars, 
and the last row of the reverse triangle has 1 star. All stars are center aligned, 
and the pattern is in a diamond shape.

E.g.when N is 3, this program will print the following star pattern

  *
 * *
* * *
 * *
  *

*/

#include <iostream>
using namespace std;

int main()
{
	int N; // Variable that determines how many stars will be in the longest row of the diamond
	cout << "How wide would you like your diamond to be?" << endl;
	cin >> N;

		for (int i = 1; N > i; i++) //Top triangle loop, not including the middle with no spaces
		{
			for (int u = 1; u < N - i; u++) // Space printer, decreases over each iteration
			{
				cout << " ";
			}

			for (int s = 0; ((s * 2) - i) < i; s++) // Space Star printer, increases over each iteration
			{
				cout << " *";
			}
			cout << endl;
		}

		for (int i = 1; N - 1 > i; i++) // Bottom triangle loop, including middle 
		{
			for (int u = 0; ((u * 2) - i) < i; u++) // Space printer, increases over each iteration
			{
				cout << " ";
			}

			for (int s = 0; s < (N - 1) - i; s++) // Space Star printer, starts at N stars and decreases over each iteration
			{
				cout << " *";
			}
			
			cout << endl;
		}

	return 0;
}