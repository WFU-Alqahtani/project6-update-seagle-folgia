#include <iostream>
#include <fstream>
#include <ostream>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include "LinkedList.h"
#include "BinaryInsertionSort.h"
#include "Node.h"
#include "YourClass.h"
using namespace std;

int main() {

    string filename;
    string line;

    ifstream inFile;

    cout << "Enter your file name: ";
    cin >> filename;

    inFile.open("/Users/harrisonseagle/CLionProjects/project6-update-seagle-folgia/cities.csv");

    if(inFile.fail())
    {
        cout << "Could not open file.";
        return -1;
    }


   //read the file name of your dataset

    string YourClass;

    vector<YourClass> Cities[20];


    // populate the vector with the data from your data set

    getline(inFile, line);

    while(getline(inFile, line)) {

        string country;
    }


    // binary insertion sort
    insertionSort(Cities, Cities.size());

    // check if sorted
    for (int i = 1; i < Cities.size(); i++) {
        assert(Cities[i-1] <= Cities[i]);
    }

    // print out sorted list
    for (int i = 0; i < Cities.size(); i++) {
        //you should ovrride << to YourClass
        cout << Cities[i] << endl;
    }

    // FINISH ME

}