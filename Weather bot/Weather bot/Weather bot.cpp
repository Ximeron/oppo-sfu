
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

struct Date {
    int dd;
    int mm;
    int yy;
};

struct Weather {
    struct Date d;
    string place;
    double temp;
}; 



int warn_if_file_not_open(ifstream& in) {
    if (!in.is_open()) {
        cout << "err";
        return 0;
    }
}


Date getDate(istream& ist) {
    Date date;
    ist >> date.dd;
    ist.get();
    ist >> date.mm;
    ist.get();
    ist >> date.yy;
    return date;
}

Weather getWeather(istream& ist) {
    Weather weather;
    weather.d = getDate(ist);
    ist >> weather.place;
    ist >> weather.temp;
    return weather;
}



int main() {
    vector<Weather> weath;
    ifstream in("weather.txt");
    
    warn_if_file_not_open(in);
    
    while (!in.eof()) {
        Weather w = getWeather(in);
        weath.push_back(w);
    }
    for (const auto& data:weath)  {
        cout << data.d.dd << '.' << data.d.mm << '.' << data.d.yy << " " << data.place << " " << data.temp << endl;
    }
}
