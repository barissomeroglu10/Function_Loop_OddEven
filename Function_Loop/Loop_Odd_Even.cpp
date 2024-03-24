/*
In this code, we will calculate Total and Multiplication for Odd Numbers and Total of Square of Even Numbers.

Developer = Barış Someroğlu
Date = 25.03.2024 / 01:00 a.m.
*/

#include <iostream>

using namespace std;

// prototype declaration for functions
int TotalOddNumbers(int);
int MultiplicationOddNumbers(int);
int SquareTotalEvenNumbers(int);

int main()
{
	int EndOfLoop;

	cout << "Please Enther a Number for End of Loop: ";
	cin >> EndOfLoop;

	cout << "\n";

	int TotalOdd = TotalOddNumbers(EndOfLoop);
	int MultiplicationOdd = MultiplicationOddNumbers(EndOfLoop);

	int SquareTotalEven = SquareTotalEvenNumbers(EndOfLoop);

	cout << "Total of Odd Numbers: " << TotalOdd << endl; cout << "\n";
	 
	cout << "Multiplication of Odd Numbers: " << MultiplicationOdd << endl; cout << "\n";

	cout << "Total of Square of Even: " << SquareTotalEven << endl; cout << "\n";


	return 0;
}


// functions to calculate Total and Multiplication for Odd Numbers and Total of Square of Even Numbers
int TotalOddNumbers(int EndOfLoop)
{
	int TotalOdd = 0;
	
	for (int i = 1; i <= EndOfLoop; i = i + 2)
	{
		TotalOdd += i;
	}

	return TotalOdd;
}

int MultiplicationOddNumbers(int EndOfLoop)
{
	int MultiplicationOdd = 1;

	for (int i = 1; i <= EndOfLoop; i = i + 2)
	{
		MultiplicationOdd *= i;
	}

	return MultiplicationOdd;
}

int SquareTotalEvenNumbers(int EndOfLoop)
{
	int SquareTotal = 0;

	for (int i = 0; i <= EndOfLoop; i = i + 2)
	{
		SquareTotal += i * i;
	}

	return SquareTotal;
}



