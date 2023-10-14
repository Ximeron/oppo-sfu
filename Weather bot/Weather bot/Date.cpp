#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdexcept>
#include "Date.h"

using namespace std;

bool IsLeap(int year)
{
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

Date GetDate(istream& ist) {
    //std::string s;
    //std::getline(ist, s);
    //std::cout << s;

    Date date;
    ist >> date.dd;
    //std::cout << date.dd;

    ist.get();
    ist >> date.mm;
    //std::cout << date.mm;

    ist.get();
    ist >> date.yy;
    //std::cout << date.yy;


    switch (switch_on)
    {

    case 0: {


    }

    case 1: {


    }
    default:
        break;
    }


    if (date.dd > 31 || date.mm > 12 || date.mm <= 0 || date.dd <= 0) {
        throw std::range_error("Неверный формат даты");
    }
    
    
    
    return date;
  
    
}