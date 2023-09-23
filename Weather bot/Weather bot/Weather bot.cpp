﻿#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


#include "proto.h"
#include "Date.h"
#include "Weath.h"



int main() {
    vector<Weather> weath;
    ifstream in("weather.txt");
    WarnIfFileNotOpen(in);
    while (!in.eof()) {
        Weather w = GetWeather(in);
        weath.push_back(w);
    }
    for (const auto& data:weath)  cout << data.d.dd << '.' << data.d.mm << '.' << data.d.yy << " " << data.place << " " << data.temp << endl;
}