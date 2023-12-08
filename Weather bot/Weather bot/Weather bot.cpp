
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


#include "Date.h"
#include "Weath.h"



int main() {
    setlocale(0, "");
    vector<Weather> weath;
    //WarnIfFileNotOpen(in);
    ifstream in("weather.txt");
    while (!in.eof()) {
        try
        {
            Weather w = GetWeather(in);
            weath.push_back(w);
        }
        
        catch (const std::range_error) {
            std::cout << "Неверный формат даты";
        }


        catch (const std::exception& err)
        {
            std::cout << "Ошибка в данных файла" << err.what();
        }
    }

    
    for (const auto& data : weath)
        data.Print(std::cout);
    return 0;

}