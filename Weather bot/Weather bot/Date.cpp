#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdexcept>
#include "Date.h"

using namespace std;


Date GetDate(istream& ist) {
    Date date;
    ist >> date.dd;
    ist.get();
    ist >> date.mm;
    ist.get();
    ist >> date.yy;
    if (date.dd >= 31 || date.mm >= 12 || date.mm <= 0 || date.dd <= 0) {
        throw std::range_error("Неверный формат даты");
    }
    
    
    
    return date;
  
    
}