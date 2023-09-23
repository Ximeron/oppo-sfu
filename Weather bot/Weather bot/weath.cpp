#include <iostream>
#include "weath.h"


Weather GetWeather(std::istream& ist) {
    Weather weather;
    weather.d = getDate(ist);
    ist >> weather.place;
    ist >> weather.temp;
    return weather;
}