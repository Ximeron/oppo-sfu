
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>





using namespace std;


struct weather {
    struct date_split {
        int day;
        int month;
        int year;
    } s;
    string place;
    double temp;
};

int warn(ifstream& in) {
    if (!in.is_open()) {
        cout << "err";
        return 0;
    }
}

int splitter(string dte, char faq) {
    string str = dte;
    stringstream ss;
    int dd, mm, yy;
    ss << str;

    if (faq == 'd') {
        ss >> dd;
        return dd;

    }
    else if (faq == 'm') {
        ss.seekg(3);
        ss >> mm;
        return mm;

    }
    else if (faq == 'y') {
        ss.seekg(6);
        ss >> yy;
        return yy;
    }
}

Date getDate(istream& ist) {
    Date date;
    ist >> date.yyyy;
    ist.get();
    ist >> date.month;
    ist.get();
    ist >> date.day;
    return date;
}

Weather getWeather(istream& ist) {
    Weather weather;
    ist >> weather.place;
    weather.date = getDate(ist);
    return weather;
}



int main() {
    vector<weather> weath;
    ifstream in("weather.txt");
    
    warn(in);

    

    while (!in.eof()) {
        weather w = getWeather(in);
        weath.push_back(w);
    }

    for (const auto& data:weath)  {
        cout << data.s.day << '.' << data.s.month << '.' << data.s.year << " " << data.place << " " << data.temp << endl;
    }
}
