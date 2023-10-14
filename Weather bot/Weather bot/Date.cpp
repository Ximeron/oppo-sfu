#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdexcept>
#include "Date.h"

using namespace std;

int IsLeap(int year)
{
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

bool Feb_test(int d, int m, int y) {
    if (IsLeap(y)) {
        if (m == 2 && d > 29) {
            return true;
        }
        else {
            return false;
        }
    }
}

bool D_check(int day, int month, int year) {
    if (day > 31 || month > 12 || day<=0 || month <=0 || year <=0) {

        return true;
    }
    else {
        return false;
    }
}

Date GetDate(istream& ist) {
    string ch;

    Date date;
    ist >> date.dd;

    ist.get();
    ist >> date.mm;

    ist.get();
    ist >> date.yy;
    getline(ist, ch, '"');


    if (!ist.good() || Feb_test(date.dd, date.mm, date.yy) || D_check(date.dd, date.mm, date.yy)) {
        throw std::range_error("Неверный формат даты");
    }
    return date;
}