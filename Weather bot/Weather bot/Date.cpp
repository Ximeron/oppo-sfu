#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdexcept>
#include "Date.h"

using namespace std;


Date GetDate(istream& ist) {
    //std::string s;
    //std::getline(ist, s);
    //std::cout << s;

    Date date;
    ist >> date.dd;
    std::cout << date.dd;

    ist.get();
    ist >> date.mm;
    std::cout << date.mm;

    ist.get();
    ist >> date.yy;
    std::cout << date.yy;

    if (date.dd > 31 || date.mm > 12 || date.mm <= 0 || date.dd <= 0) {
        throw std::range_error("Неверный формат даты");
    }
    
    
    
    return date;
  
    
}