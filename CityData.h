//
// Created by Harrison Seagle  on 4/8/20.
//

#ifndef BINARYINSERTIONSORT_CITYDATA_H
#define BINARYINSERTIONSORT_CITYDATA_H

#include <iostream>
#include <ostream>
#include <string>


using namespace std;

class CityData {

    public:
    CityData();
    CityData(string city);
    bool operator>(const CityData &C);
    bool operator<(const CityData &C);
    bool operator==(const CityData &C);
    friend ostream & operator<<(ostream &os, const CityData &C);


    string cityName;

};


#endif //BINARYINSERTIONSORT_CITYDATA_H
