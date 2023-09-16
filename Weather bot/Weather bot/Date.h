#pragma once
#include <iostream>

struct Date {
    int dd;
    int mm;
    int yy;
};

Date getDate(std::istream& ist);