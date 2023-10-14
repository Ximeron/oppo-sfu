#pragma once
#include <iostream>

struct Date {
    int dd;
    int mm;
    int yy;




};

Date GetDate(std::istream& ist);
bool IsLeap(int year);
