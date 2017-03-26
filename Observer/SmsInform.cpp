#include <iostream>
#include "SmsInform.h"

void SmsInform::update(float temperature, float humidity) const {
	std::cout << "Sms Inform:"
		<< "  temperature: " << temperature 
		<< ", humidity: " << humidity << "\n";
}
