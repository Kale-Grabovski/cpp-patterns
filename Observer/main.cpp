#include <iostream>
#include <memory>
#include "WeatherData.h"
#include "SmsInform.h"
#include "CurrentConditions.h"

int main () {
    std::shared_ptr<CurrentConditions> currentConditions(new CurrentConditions);
    std::shared_ptr<SmsInform> smsInform(new SmsInform);
    std::shared_ptr<WeatherData> weatherData(new WeatherData);

    weatherData->registerObserver(currentConditions);
    weatherData->registerObserver(smsInform);
    weatherData->setMeasurements(100, 20.2);
    
    return 0;
}
