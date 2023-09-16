#include <iostream>
#include "weath.h"


Weather getWeather(std::istream& ist) {
    Weather weather;
    weather.d = getDate(ist);
    ist >> weather.place;
    ist >> weather.temp;
    return weather;
}