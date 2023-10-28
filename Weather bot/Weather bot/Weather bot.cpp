#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


#include "proto.h"
#include "Date.h"
#include "Weath.h"



int main() {
    setlocale(0, "");
    vector<Weather> weath;
    //WarnIfFileNotOpen(in);
    ifstream in("weather.txt");
   

    try
    {
        while (!in.eof()) {
            Weather w = GetWeather(in);
            weath.push_back(w);
        }
    }

    catch (const std::range_error) {
        std::cout << "Неверный формат даты";
    }


    catch (const std::exception)
    {
        std::cout << "Ошибка в данных файла";
    }
    for (const auto& data : weath)
        data.print(std::cout);
    return 0;

}