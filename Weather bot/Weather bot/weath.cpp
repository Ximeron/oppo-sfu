#include <iostream>
#include "weath.h"
#include <stdexcept>


int q = 0;

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

    for (int e = 0; e < weather.place.length(); e++) {
        if (a[e] == '-')
            q++;
    }
    for (int e=0; e < weather.place.length();e++) {
        if (a[0] == '-' || (q>=3) || a[a.size() - 1] == '-') {
            throw std::exception();

        }
        else {
            const std::string validChars = "- ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzÀÁÂÃÄÅ¨ÆÇÈÉÊËÌÍÎÏĞÑÒÓÔÕÖ×ØÙÚÛÜİŞßàáâãäå¸æçèéêëìíîïğñòóôõö÷øùúûüışÿ";
            if (validChars.find_first_of(a[e]) == std::string::npos) {
                throw std::exception();
            }
        }
        
    }




   
    if (ist.bad()) {
        throw std::exception("Îøèáêà ôóíêöèè ÷òåíèÿ ïîãîäû");
    }
  
    return weather;
}