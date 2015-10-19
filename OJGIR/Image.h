#pragma once
#include "Utilities.h"


class Image
{
public:
	Image();
	Image(int _x, int _y);
	~Image();

	void saveBMP();

	int x;
	int y;

	glm::dvec3** imgData;

private:

	
};

