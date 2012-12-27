#include "math_utils.h"
#include "stdafx.h"
#define PI 3.14159265358979323846

class CMathUtilsTest : public MathUtils
{
public:
	int MathUtils::sum(int value[])
	{
		int value[] = {5, 12, 44, 22, 55, 22, 55, 77};
		int sum = 0;
	    for(int i = sizeof(value) -1; i >= 0; i--)
	    {
		    sum += value[i];
	    }

	    return sum;
	}
};