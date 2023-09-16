#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Date.h"

using namespace std;

Date getDate(istream& ist) {
    Date date;
    ist >> date.dd;
    ist.get();
    ist >> date.mm;
    ist.get();
    ist >> date.yy;
    return date;
}