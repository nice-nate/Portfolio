//Nathan Olson
//10/2/14
/*This program computes and outputs the mean 
and standard deviation of a set of 4 integer 
values that are input by the user. 
*/

#include <iostream>
#include <cmath>
using namespace std;

double val1, val2, val3, val4;

int main()
{
//This asks the user to read in for the 4 integers
cout << "What are the 4 values? Seperate your response with a space between each value:" << endl;
cin >> val1 >> val2 >> val3 >> val4;

//This is the assignment statement for the Mean
double mean = (val1 + val2 + val3 + val4)/(4.0);

//This is the assignment statement for Standard Deviation
double sd = (sqrt(pow(val1 - mean, 2) + 
			      pow(val2 - mean, 2) + 
	              pow(val3 - mean, 2) + 
			      pow(val4 - mean, 2))  /3.0);

//This prints the results neatly

cout << "The 4 values you have entered are "
	 << val1 << ", " <<val2 << ", " << val3 << ", " << val4 << endl
	 << "The mean of these 4 values are "
	 << mean << endl
	 << "The Standard deviation of these values is "
	 << sd << endl;
	return 0;
}