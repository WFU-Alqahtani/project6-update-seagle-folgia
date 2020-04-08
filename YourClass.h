//
// Created by Harrison Seagle  on 4/8/20.
//

#ifndef BINARYINSERTIONSORT_YOURCLASS_H
#define BINARYINSERTIONSORT_YOURCLASS_H

#include <iostream>
#include <string>
using namespace std;

class YourClass {

public:
    YourClass();
    YourClass(string city);
    bool operator>(const YourClass &C);
    bool operator<(const YourClass &C);
    bool operator==(const YourClass &C);
    friend ostream & operator<<(ostream &os, const YourClass &C);


private:
    string cityName;

};


#endif //BINARYINSERTIONSORT_YOURCLASS_H
