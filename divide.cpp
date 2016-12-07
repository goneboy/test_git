#include "header.h"

float divide(int a, int b)
{
	if(b != 0)
	{
		return (float) a / (float) b;
	}
	else
	{
		cout << "The denominator must differ 0. The expression can't be executed.\n";
	}
}

