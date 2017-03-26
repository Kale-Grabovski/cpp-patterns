#pragma once

#include "DrawApi.h"

class GreenCircle : public DrawApi {
public:
	virtual void drawCircle(int radius, int x, int y) override;
};
