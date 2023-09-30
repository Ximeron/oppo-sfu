#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Date.h"

using namespace std;

Date GetDate(istream& ist) {
    Date date;
    try {

        ist >> date.dd;
        ist.get();
        ist >> date.mm;
        ist.get();
        ist >> date.yy;
    }

    catch (std::range_error& e) {
        cout << "� ����� ��������� ������(-�) � �������� �������� ����" << endl;
        cerr << e.what();
    }
    
    if (date.dd > 31 || date.mm > 12) {
        throw std::range_error("�������� ������ ����");
    }
    else {
        return date;
    }
    
}