//Nathan Olson
//10/2/14
/* This program calculates both soulutions to the quadratic equation when 
b = 10, a = 7, and c = 3 and prints the solutions to 2 decimal places.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double const a = 7;
double const b = 10;
double const c = 3;

int main()
{
//This is the assignment statement for the 2 formulas, f1a = formula 1 answer

double f1a = -b + (sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
double f2a = -b - (sqrt(pow(b,2) - 4 * a * c)) / (2 * a);

//This prints the results neatly

cout << fixed << setprecision(2);

cout << "The first solution is: "
	 << f1a << endl
	 << "The second solution is: "
	 << f2a << endl;
	return 0;
}