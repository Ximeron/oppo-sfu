#include <iostream>
#include "weath.h"

void Weather::print(std::ostream& out) const
{
    out << d.dd << '.' << d.mm << '.' << d.yy << " "
        << place << " " << temp << std::endl;
}

Weather GetWeather(std::istream& ist) {
    Weather weather;
    weather.d = GetDate(ist);
    ist >> weather.place;
    ist >> weather.temp;
    return weather;
}