#include <iostream>
#include <memory>
#include "WeatherData.h"
#include "Observer.h"

using namespace std;

void WeatherData::registerObserver(shared_ptr<Observer> obs) {
	observers[obs] = obs;
}

void WeatherData::removeObserver(shared_ptr<Observer> obs) {
	observers.erase(obs);
}

void WeatherData::notify() {
	for (map<shared_ptr<Observer>, shared_ptr<Observer>>::iterator itr = observers.begin(), 
		end = observers.end(); itr != end; ++itr ) {
		itr->first->update(temperature, humidity);
	}
}

void WeatherData::setMeasurements(float mTemperature, float mHumidity) {
	temperature = mTemperature;
	humidity    = mHumidity;
	notify();
}
