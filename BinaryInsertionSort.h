#ifndef BINARYINSERTIONSORT_H
#define BINARYINSERTIONSORT_H

#include <vector>
#include <ctime>
#include "CityData.h"
using namespace std;


int binarySearch(vector<CityData> a, int item, int low, int high);
void insertionSort(vector<CityData> &a, int n);

#endif //BINARYINSERTIONSORT_H
