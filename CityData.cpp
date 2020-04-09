//
// Created by Harrison Seagle  on 4/8/20.
//

#include "CityData.h"
#include "Node.h"

CityData::CityData() {
    string cityName;
}


CityData::CityData(string city) {
    cityName = city;
}

bool CityData::operator>(const CityData &C) {
    return (this->cityName > C.cityName);
}

bool CityData::operator<(const CityData &C){
    return (this->cityName < C.cityName);
}

bool CityData::operator==(const CityData &C) {
    return (this->cityName == C.cityName);
}

ostream & operator<<(ostream &os, const CityData &C) {

    os << C.cityName << endl;

    return os;
}