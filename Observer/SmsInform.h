#pragma once

#include "Observer.h"

class SmsInform : public Observer {
public:
	void update(float, float) const override;
};
