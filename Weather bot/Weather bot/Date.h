#pragma once
#include <iostream>

struct Date {
    int dd;
    int mm;
    int yy;




};

Date GetDate(std::istream& ist);
int LeapAssert(int year);


bool DateConfirm(int day, int month, int year);
bool FebruaryAssert(int d, int m, int y);