#pragma once
#include <iostream>
#include <string> 
#include "Date.h"

struct Weather {
    Date d;
    std::string place;
    double temp;

    void print(std::ostream& out) const;
}; 

Weather GetWeather(std::istream& ist);
