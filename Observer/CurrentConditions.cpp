#include <iostream>
#include "CurrentConditions.h"

void CurrentConditions::update(float temperature, float humidity) const {
	std::cout << "Current conditions:"
		<< "  temperature: " << temperature 
		<< ", humidity: " << humidity << "\n";
}
