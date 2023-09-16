#include <iostream>
#include "proto.h"

using namespace std;

int warn_if_file_not_open(std::ifstream& in) {
    if (!in.is_open()) {
        cout << "err"; 
        return 0;
    }
}