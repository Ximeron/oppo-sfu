
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdexcept>
#include "Date.h"

using namespace std;

int LeapAssert(int year)
{
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

bool FebruaryAssert(int d, int m, int y) {
        if ((LeapAssert(y) == true && m == 2 && d > 29)) {
            return false;
        }
        else if ((LeapAssert(y) == false && m == 2 && d > 28)) {
            return false;
        }
        else {
            return true;

        }
}

bool DateConfirm(int day, int month, int year) {
    if (day > 31 || month > 12 || day <= 0 || month <= 0 || year <= 0) {

        return false;
    }

    else if(month == 2){
        return FebruaryAssert(day, month, year);

    }
    else {
        return true;
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


    if (!ist.good() && DateConfirm(date.dd, date.mm, date.yy) == false) {
        throw std::range_error("Неверный формат даты");
    }
    return date;
}