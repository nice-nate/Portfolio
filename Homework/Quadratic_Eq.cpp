#include <iostream>
#include <cmath>
using namespace std;


int main()
{
float a, b, c, A1, A2, Discriminant;

cout << "Enter in the value for A" << endl;
cin >> a;

cout << "Enter in the value for B" << endl;
cin >> b;

cout << "Enter in the value for C" << endl;
cin >> c;

Discriminant = (b*b)-(4*a*c);
A1 = -(b)+sqrt((b*b) - (4*a*c))/ (2*a);
A2 = -(b)-sqrt((b*b) - (4*a*c))/ (2*a);

if (a == 0)
{
cout <<"Not a valid input " << endl;
return 0; 
}

if (Discriminant < 0)
{
cout << "no real solution" << endl;
return 0;
}

cout <<"Positive answer " << A1 << endl;
cout <<"Negative answer " << A2 << endl;

return 0;
}