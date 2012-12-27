#ifndef _MATHUTILS_H_
#define _MATHUTILS_H_

class MathUtils
{
public:
	virtual int signum(const int n) = 0;

	virtual int sum(int values[]) = 0;

	virtual void arraySumInternal(int pValues[]) = 0;

	virtual float cross(const float pXA, const float pYA, const float pZA, const float pXB, const float pYB, const float pZB) = 0;

	virtual float dot(const float pXA, const float pYA, const float pZA, const float pXB, const float pYB, const float pZB) = 0;

	virtual bool isOdd(int num) = 0;

	virtual bool isEven(int num) = 0;

	virtual float mix(float pX, float pY, float pZ, float pMix) = 0;

	virtual float length(const float pX, const float pY, const float pZ) = 0;

	virtual float distance(const float pX1, const float pY1, const float pZ1, const float pX2, const float pY2, const float pZ2) = 0;

	virtual float bringToBounds(const float pMinValue, const float pMaxValue, const float pValue) = 0;

	virtual int bringToBounds(const int pMinValue, const int pMaxValue, const int pValue) = 0;
	
	virtual bool isInBounds(const float pMinValue, const float pMaxValue, const float pValue) = 0;

	virtual bool isInBounds(const int pMinValue, const int pMaxValue, const int pValue) = 0;

	virtual float arraySum(const float pValues[]) = 0;

	virtual void arraySumInto(long pValues[], long pTargetValues[], long pFactor) = 0;

	virtual void arraySumInternal(long pValues[], long pFactor) = 0;

	virtual void arraySumInternal(long pValues[]) = 0;

	virtual int nextPowerOfTwo(int n) = 0;

	virtual int nextPowerOfTwo(float f) = 0;

	virtual bool isPowerOfTwo(int n) = 0;

	virtual float atan2(const float dY, const float dX, const float dZ) = 0;

	virtual float radtoDeg(float pRad) = 0;

	virtual float convertDegToRad(float pDegree) = 0;

	virtual float arrayAverage(float pValues[]) = 0;

	virtual float rotateAroundCenter(float pVertices[], float pRotation, float pRotationCenterX, 
		float pRotationCenterY, float pRotationCenterZ) = 0;
};
#endif // !_MATHUTILS_H_
