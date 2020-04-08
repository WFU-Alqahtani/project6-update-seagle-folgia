//
// Created by Harrison Seagle  on 4/8/20.
//

#include "YourClass.h"


YourClass::YourClass(){

}

YourClass::YourClass(string city) {
    cityName = city;
}

bool YourClass::operator>(const YourClass &C) {
    return (this->cityName > C.cityName);
}

bool YourClass::operator<(const YourClass &C){
    return (this->cityName < C.cityName);
}

bool YourClass::operator==(const YourClass &C) {
    return (this->cityName == C.cityName);
}

ostream & operator<<(ostream &os, const YourClass &C) {

    os << C.cityName << endl;

    return os;
}