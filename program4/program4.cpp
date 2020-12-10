// program4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int num;

	// Output the first line

	cout << "The numbers generated are: ";

	for (int i = 0; i < 100; i++){
		num = (1 + rand() % 10);								// Generate random numbers
		cout << " " << num;

		if (i % 10 == 0){
			cout << endl;										// Skip 10 lines
		}

	}

	cout << endl;												// Skip a line

	return 0;
}

