// Lab00_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int StringToInt(const char * str, bool & err)
{
	char * pLastChar = NULL;
	int param = strtol(str, &pLastChar, 10);
	err = ((*str == '\0') || (*pLastChar != '\0'));
	return param;
}

int main(int argc, char* argv[])
{
	if (argc <= 1)
	{
		cout << "Program shows Fibonacci numbers in range from 0 to N" << endl << "N is command line argument" << endl;
		return 0;
	}

	int i;
	int F1 = 0;
	int F2 = 1;
	bool err;
	int N = StringToInt(argv[1], err);
	while (N >= F2)
	{
		cout << F1 << ", ";
		F2 = F2 + F1;
		F1 = F2 - F1;
	}
	cout << F1 << endl;
    return 0;
}

