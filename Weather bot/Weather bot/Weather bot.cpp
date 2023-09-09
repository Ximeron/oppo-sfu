// Weather bot.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>




using namespace std;

struct weather {
    string date;
    string place;
    double temp;

};


int main() {
    vector<weather> weath;
    ifstream in("weather.txt");
    if (!in.is_open()) {
        cout << "err";
        return 0;
    }

    int num=0;
    

    while (!in.eof()) {
        weather w;

        in >> w.date >> w.place >> w.temp;
        weath.push_back(w);
         
        num++;

    }

    for (const auto& data:weath)  {
        cout << data.date << " " << data.place << " " << data.temp << endl;
        

    }
       

    in.close();


    return 0;


}
