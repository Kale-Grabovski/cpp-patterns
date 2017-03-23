#pragma once

#include "DrawApi.h"

class GreenCircle : public DrawApi {
public:
	void drawCircle(int radius, int x, int y) override;
};
