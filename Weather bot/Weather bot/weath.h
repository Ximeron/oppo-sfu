#pragma once

#include <iostream>
#include <string> 

#include "Date.h"

struct Weather {
    Date d;
    std::string place;
    double temp;
}; 
Weather GetWeather(std::istream& ist);