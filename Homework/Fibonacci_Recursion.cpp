/*
b. Define a recursive function to calculate Fibonacci
numbers. In main assign N with an integer (positive
and less than 20) from standard input. Based on the
value of N, call the recursive function and output the
Nth Fibonacci number

e.g. Fibonnacci(N) = Fibonnacci(N-1) + Fibonacci(N-2)

*/

#include <iostream>
using namespace std;
int fib(int N);

int main()
{
	int N = 100; // Initialized fibonacci iteration

	cout << "Enter the iteration (1-20) of the Fibonnacci Sequence you would like to print." << endl;
	cin >> N;

	do // Loop to enter valid sequence number
	{

		if ((N > 20) || (N < 0)) // Initial check to see if Input is appropriate
		{
			cout << "Only values between 1 and 20 are valid" << endl << endl;
			cout << "What is the new value?" << endl;
			cin >> N;
		}

	} while ((N > 20) || (N < 0));

	cout << "The iteration " << N << " will produce the value " << fib(N) << endl;

	return 0;

}

int fib(int A) // A for Answer
{
	if (A < 3) // Check for the lowest iteration to give back the proper iteration value
		return 1;
	else       // Recursion here
		return A = fib(A - 1) + fib(A - 2);
}