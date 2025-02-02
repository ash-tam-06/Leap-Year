//
// Created by Asmita Tamang on 2/1/25.
//

#include "main.h"
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Please give a year!" << endl;
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << "The year is a leap year!" << endl;
    } else cout << "The year is not a leap year!" << endl;

    return 0;
}
