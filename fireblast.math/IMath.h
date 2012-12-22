#ifndef _IMATH_H_
#define _IMATH_H_

namespace IMath
{
	int signum(const int n);

	int sum(int values[]);

	void arraySumInternal(int pValues[]);

	float cross(const float pXA, const float pYA, const float pZA, const float pXB, const float pYB, const float pZB);

	float dot(const float pXA, const float pYA, const float pZA, const float pXB, const float pYB, const float pZB);

	bool isOdd(int num);

	bool isEven(int num);

	float mix(float pX, float pY, float pZ, float pMix);

	float length(const float pX, const float pY, const float pZ);

	float distance(const float pX1, const float pY1, const float pZ1, const float pX2, const float pY2, const float pZ2);

	float bringToBounds(const float pMinValue, const float pMaxValue, const float pValue);

	int bringToBounds(const int pMinValue, const int pMaxValue, const int pValue);
	
	bool isInBounds(const float pMinValue, const float pMaxValue, const float pValue);

	bool isInBounds(const int pMinValue, const int pMaxValue, const int pValue);

	float arraySum(const float pValues[]);

	void arraySumInto(long pValues[], long pTargetValues[], long pFactor);

	void arraySumInternal(long pValues[], long pFactor);

	void arraySumInternal(long pValues[]);

	int nextPowerOfTwo(int n);

	int nextPowerOfTwo(float f);

	bool isPowerOfTwo(int n);

	float atan2(const float dY, const float dX, const float dZ);

	float radtoDeg(float pRad);

	float convertDegToRad(float pDegree);

	float arrayAverage(float pValues[]);
}
#endif // !_IMATH_H_

