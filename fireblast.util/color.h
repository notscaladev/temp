#ifndef _COLOR_H_
#define _COLOR_H_

class IColor {
public:
	float getRedColor();

	float getGreen();

	float getBlue();

	float getAlpha();

	int getABGRPackedInt();

	float getABGRPackedFloat();
};
#endif // !_COLOR_H_
