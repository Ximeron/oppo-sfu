#include <iostream>
#include "weath.h"


Weather GetWeather(std::istream& ist) {
    Weather weather;
    weather.d = GetDate(ist);
    ist >> weather.place;
    ist >> weather.temp;
    return weather;
}