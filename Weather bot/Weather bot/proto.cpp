#include <iostream>
#include "proto.h"

using namespace std;

int WarnIfFileNotOpen(std::ifstream& in) {
    if (!in.is_open()) {
        cout << "err"; 
        return 0;
    }
}