#pragma once

class Observer {
public:
	virtual void update(float temperature, float humidity) const = 0;
};
