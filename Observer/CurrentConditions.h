#pragma once

#include "Observer.h"

class CurrentConditions : public Observer {
public:
	void update(float, float) const override;
};
