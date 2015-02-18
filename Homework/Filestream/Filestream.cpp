//Nathan Olson
//10/14/14
/*This program reads in 5 string values from a data file named
strings.txt. The program then concatenates the first character
from all the strings together and prints the result. The program
also determines and prints the length of each string and determines
the average length of the strings in the file.*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//Variable Declaration
int sl1, sl2, sl3, sl4, sl5;
string s1, s2, s3, s4, s5;
ifstream strings;

int main()
{
	strings.open("strings.txt");

strings >> s1 >> s2 >> s3 >> s4 >> s5;

sl1 = s1.length();
sl2 = s2.length();
sl3 = s3.length();
sl4 = s4.length();
sl5 = s5.length();

cout << "The first letter of each string concatenated is..."
	 << endl
	 << s1.at(0)
	 << s2.at(0)
	 << s3.at(0)
	 << s4.at(0)
	 << s5.at(0)
	 << endl;

cout << "The length of the strings in order are as follows..." << endl
	 << sl1 << " "
	 << sl2 << " "
	 << sl3 << " "
	 << sl4 << " "
	 << sl5 << " "
	 << endl
	 << "The average of theses strings equal "
	 << fixed << setprecision(2)
	 << float (sl1 + sl2 + sl3 + sl4 + sl5) / 5
	 << endl;

strings.close();
	return 0;
}