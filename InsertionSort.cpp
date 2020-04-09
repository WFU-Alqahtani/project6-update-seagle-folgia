#include <iostream>
#include <fstream>
#include <ostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include "LinkedList.h"
#include "BinaryInsertionSort.h"
#include "Node.h"
#include "CityData.h"
using namespace std;

int main() {

    string fileName = "/Users/harrisonseagle/CLionProjects/project6-update-seagle-folgia/cities.csv";
    int fileSize = 23467;
    ifstream inFile;

    cout << "Enter your file name: " << endl;
    //cin >> fileName;
    cout << "Enter the file size: " << endl;
    //cin >> fileSize;


    inFile.open(fileName);


    if(inFile.fail())
    {
        cout << "Unable to open file";
        return -1;
    }

    string line;

     CityData City;
     LinkedList secondCities;

     vector<CityData> Cities; // vector to be sorted


    getline(inFile, line);
    while (getline(inFile, line)){
        string nameOfCity;
        stringstream temp(line);
        getline(temp, nameOfCity, ',');
        City.cityName = nameOfCity;
        Cities.emplace_back(nameOfCity);
        secondCities.append(City);

    }

//    clock_t start_insertionSort = clock();
    secondCities.InsertionSort();
//    clock_t end_insertionSort = clock();
    secondCities.printList();

//    // binary insertion sort
//    clock_t start_binaryInsertionSort = clock();
//    insertionSort(Cities, fileSize);
//    clock_t end_binaryInsertionSort = clock();
//

    // check if sorted
//    for (int i = 1; i < fileSize; i++) {
//       assert(Cities[i-1] < Cities[i]);
//    }

//    // print out sorted list
    for (int i = 0; i < fileSize; i++) {
        //you should ovrride << to YourClass
        cout << Cities[i] << endl;
    }

//    double elapsed_binaryInsertionSort = double(end_binaryInsertionSort - start_binaryInsertionSort) / CLOCKS_PER_SEC;
//    cout << "Binary Insertion Sort Time: " << elapsed_binaryInsertionSort << endl;
//    double elapsed_insertionSort = double(end_insertionSort - start_insertionSort) / CLOCKS_PER_SEC;
//    cout << "Insertion Sort Time: " << elapsed_insertionSort << endl;

    // FINISH ME

}