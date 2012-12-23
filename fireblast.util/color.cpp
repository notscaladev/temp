#include "color.h"
#include "stdafx.h"

class Color : public IColor {
private:
	float m_red;
	float m_green; 
	float m_blue;
	float m_alpha;
	int m_ABGRPackedInt;
	float m_ABGRPackedFloat;
public:
	float Color::getRedColor()
	{
		return this->m_red;
	}

	float Color::getGreen()
	{
		return this->m_green;
	}

	float Color::getBlue()
	{
		return this->m_blue;
	}

	float Color::getAlpha()
	{
		return this->m_alpha;
	}

	int Color::getABGRPackedInt()
	{
		return this->m_ABGRPackedInt;
	}

	float Color::getABGRPackedFloat()
	{
		return this->m_ABGRPackedFloat;
	}
};