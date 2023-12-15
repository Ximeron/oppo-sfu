
#include <iostream>
#include "weath.h"
#include <stdexcept>
using namespace std;


int q_count = 0;
bool StringTest(const string& a) {
    const std::string validChars = "- ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz�����Ũ����������������������������������������������������������";

    for (int e = 0; e < a.length(); e++) {
        if (a[e] == '-')
            q_count++;
    }
    for (int e = 0; e < a.length(); e++) {
        if (a[0] == '-' || (q_count > 1) || a[a.size() - 1] == '-') {

            throw std::exception();

        }
        else if (validChars.find_first_of(a[e]) == std::string::npos) {
            throw std::exception();
        }
        else {
            return true;
        }

    }
}
void Weather::Print(std::ostream& out) const
{
    out << d.dd << '.' << d.mm << '.' << d.yy << " "
        << place << " " << temp << std::endl;
}

Weather GetWeather(std::istream& ist) {
    Weather weather;
   
    try
    {
        weather.d = GetDate(ist);

        getline(ist, weather.place, '"');
        ist >> weather.temp;
        std::string a = weather.place;
        StringTest(a);


    }
    catch (const std::range_error) {
        std::cout << "�������� ������ ����";
    }

    




   
    if (ist.bad()) {
        throw std::exception("������ ������� ������ ������");
    }
  
    return weather;
}