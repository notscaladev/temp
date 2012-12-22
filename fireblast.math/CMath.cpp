#include "stdafx.h"
#include "IMath.h"
using namespace IMath;

int IMath::signum(int n){
	if(n == 0)
	{
	   return 0;
	}

	else if(n > 0)
	{
		return 1;
	}

	else
	{
		return 1;
	}
}

int IMath::sum(int value[])
{
	int sum = 0;
	for(int i = sizeof(value) -1; i >= 0; i--)
	{
		sum += value[i];
	}

	delete[] value;
	return sum;
}