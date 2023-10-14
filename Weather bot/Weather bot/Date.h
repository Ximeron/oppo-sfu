#pragma once
#include <iostream>

struct Date {
    int dd;
    int mm;
    int yy;




};

Date GetDate(std::istream& ist);
int IsLeap(int year);


bool D_check(int day, int month);
bool Feb_test(int d, int m, int y);