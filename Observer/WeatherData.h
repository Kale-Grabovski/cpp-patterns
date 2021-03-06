#pragma once

#include <map>
#include <memory>
#include "Observable.h"
#include "Observer.h"

class WeatherData : public Observable {
public:
	virtual void registerObserver(std::shared_ptr<Observer>) override;
	virtual void removeObserver(std::shared_ptr<Observer>) override;
	virtual void notify() const override;
	void setMeasurements(float, float);
private:
    float humidity;
    float temperature;
    std::map<std::shared_ptr<Observer>, std::shared_ptr<Observer>> observers;
};
