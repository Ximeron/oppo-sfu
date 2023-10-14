#include <iostream>
#include "weath.h"
#include <stdexcept>



void Weather::print(std::ostream& out) const
{
    out << d.dd << '.' << d.mm << '.' << d.yy << " "
        << place << " " << temp << std::endl;
}

Weather GetWeather(std::istream& ist) {
    Weather weather;
   
 
    weather.d = GetDate(ist);

    getline(ist, weather.place, '"');
    ist >> weather.temp;
    std::string a = weather.place;

    for (int e=0; e < weather.place.length();e++) {
        if (a[0] == '-' || a[-1] == '-') {
            ////
        }
        else {
            const std::string validChars = "- ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzÀÁÂÃÄÅ¨ÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞßàáâãäå¸æçèéêëìíîïðñòóôõö÷øùúûüýþÿ";
            if (validChars.find_first_of(a[e]) == std::string::npos) {
                std::cout << "qwerty" << std::endl;
            }
        }
        
    }




   
    if (ist.bad()) {
        throw std::exception("Îøèáêà ôóíêöèè ÷òåíèÿ ïîãîäû");
    }
  
    return weather;
}