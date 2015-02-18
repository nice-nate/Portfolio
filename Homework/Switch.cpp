#include <iostream>
using namespace std;

int main()
{
char letter;

cout << "what is the letter?" << endl;
cin >> letter;

switch(letter)
{
case 'A' : cout << "Alpha" << endl;
			break;
case 'B' : cout << "Beta" << endl;
			break;
default : cout << "Non-Special Letter" << endl;
			break;
}

cout << "All done!" << endl;

return 0;
}