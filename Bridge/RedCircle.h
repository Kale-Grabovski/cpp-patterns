#pragma once

#include "DrawApi.h"

class RedCircle : public DrawApi {
public:
	void drawCircle(int radius, int x, int y) override;
};
