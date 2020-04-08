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
#include "YourClass.h"
using namespace std;

int main() {

    string fileName = "/Users/harrisonseagle/CLionProjects/project6-update-seagle-folgia/cities.csv";
    int fileSize = 23469;
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

    vector<YourClass> Cities; // vector to be sorted


    getline(inFile, line);
    while (getline(inFile, line)){
        string word;
        stringstream temp(line);
        getline(temp, word, ',');
        Cities.push_back(word);
    }


    // binary insertion sort
//    clock_t start_insertionSort = clock();
    insertionSort(Cities, fileSize);
//    clock_t end_insertionSort = clock();


    // check if sorted
//    for (int i = 1; i < Cities.size(); i++) {
//        assert(Cities[i-1] <= Cities[i]);
//    }

    // print out sorted list
    for (int i = 0; i < Cities.size(); i++) {
        //you should ovrride << to YourClass
        cout << Cities[i] << endl;
    }

//    double elapsed_insertionSort = double(end_insertionSort - start_insertionSort) / CLOCKS_PER_SEC;
//
//    cout << elapsed_insertionSort;

    // FINISH ME

}