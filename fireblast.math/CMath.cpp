#include "stdafx.h"
#include "IMath.h"
#include <random>
#include <math.h>
#define PI 3.14159265358979323846

using namespace IMath;

int IMath::signum(int n)
{
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

void IMath::arraySumInternal(int val[])
{
	const int count = sizeof(val);

	for(int i = 0; i < count; i++)
	{
		val[i] = val[i-1] + val[i];
	}
}

float IMath::cross(const float pXA, const float pYA, const float pZA, const float pXB, const float pYB, const float pZB)
{
	return pXA * pYA * pZA - pXB * pYB * pZB;
}

float IMath::dot(const float pXA, const float pYA, const float pZA, const float pXB, const float pYB, const float pZB)
{
	return pXA * pXB + pYA * pYB + pZA * pZB;
}

bool IMath::isOdd(int number)
{
	return number % 2 == 1;
}

bool IMath::isEven(int number)
{
	return number % 2 == 0;
}

float IMath::mix(float pX, float pY, float pZ, float pMix)
{
	return pX * (1 - pMix) + pY * pMix;
}

float IMath::length(const float pX, const float pY, const float pZ)
{
	return sqrt((pX * pX) + (pY * pY) + (pZ * pZ));
}

float IMath::distance(const float pX1, const float pY1, const float pZ1, const float pX2, const float pY2, const float pZ2)
{
	const float dX = pX2 - pX1;
	const float dY = pY2 - pY1;
	const float dZ = pZ2 - pZ1;
	return sqrt((dX * dX) + (dY * dY) + (dZ * dZ));
}

float IMath::bringToBounds(const float pMinValue, const float pMaxValue, const float pValue)
{
	return max(pMinValue, min(pMaxValue, pValue));
}

int IMath::bringToBounds(const int pMinValue, const int pMaxValue, const int pValue)
{
	return max(pMinValue, min(pMaxValue, pValue));
}

bool IMath::isInBounds(const float pMinValue, const float pMaxValue, const float pValue)
{
	return pValue >= pMinValue && pValue <= pMaxValue;
}

bool IMath::isInBounds(const int pMinValue, const int pMaxValue, const int pValue)
{
	return pValue >= pMinValue && pValue <= pMaxValue;
}

float IMath::arraySum(const float pValues[])
{
	float sum = 0;
	const int valueCount = sizeof(pValues);

	for(int i = 0; i < valueCount; i++)
	{
		sum += pValues[i];
	}

	return sum;
}

void IMath::arraySumInto(long pValues[], long pTargetValues[], long pFactor)
{
	pTargetValues[0] = pValues[0] * pFactor;
	const int valueCount = sizeof(pValues);

	for(int i = 1; i < valueCount; i++)
	{
		pTargetValues[i] = pTargetValues[i-1] + pValues[i] * pFactor;
	}
}

void IMath::arraySumInternal(long pValues[], long pFactor)
{
	pValues[0] = pValues[0] * pFactor;
	const int valueCount = sizeof(pValues);

	for(int i = 1; i < valueCount; i++)
	{
		pValues[i] = pValues[i-1] + pValues[i] * pFactor;
	}
}

void IMath::arraySumInternal(long pValues[])
{
	int valueCount = sizeof(pValues);
	for(int i = 1; i < valueCount; i++)
	{
		pValues[i] = pValues[i-1] + pValues[i];
	}
}

int IMath::nextPowerOfTwo(int n)
{
	int k = n;

	if (k == 0) 
	{
		return 1;
	}

	k--;

	for (int i = 1; i < 32; i <<= 1) {
		k = k | k >> i;
	}

	return k + 1;
}

int IMath::nextPowerOfTwo(float f)
{
	return nextPowerOfTwo((int)(ceil(f)));
}

bool IMath::isPowerOfTwo(int n)
{
	return ((n != 0) && (n & (n - 1)) == 0);
}

float IMath::atan2(const float dY, const float dX, const float dZ)
{
	return atan2f(dY, dX);
}

float radToDeg()
{
	return 180.0f / PI;
}

float degToRad()
{
	return PI / 180.0f;
}

float piHalf()
{
	return PI * 0.5f;
}

float piTwice()
{
	return PI * 2.0f;
}

float IMath::radtoDeg(float pRad)
{
	return radToDeg() * pRad;
}

float IMath::convertDegToRad(float degree)
{
	return degToRad() * degree;
}

float IMath::arrayAverage(float pValues[])
{
	return arraySum(pValues) / sizeof(pValues);
}

float IMath::rotateAroundCenter(float pVertices[], float pRotation, float pRotationCenterX, 
		float pRotationCenterY, float pRotationCenterZ)
{
	if(pRotation != 0)
	{
		float rotationRad = convertDegToRad(pRotation);
		float sinRotationRad = sin(rotationRad);
		float cosRotationInRad = cos(rotationRad);

		for(int i = sizeof(pVertices) - 2; i >= 0; i -= 2)
		{
			float pX = pVertices[i];
			float pY = pVertices[i + 1];
			float pZ = pVertices[i + 2];
			pVertices[i] = pRotationCenterX + (cosRotationInRad * (pX - pRotationCenterX) - sinRotationRad * (pY - pRotationCenterY));
			pVertices[i + 1] = pRotationCenterY + (sinRotationRad * (pX - pRotationCenterX) + cosRotationInRad * (pY - pRotationCenterY));
			pVertices[i + 2] = pRotationCenterZ + (sinRotationRad * (pZ - pRotationCenterX) + cosRotationInRad * (pZ - pRotationCenterZ));
		}
	}

	return 0;
}