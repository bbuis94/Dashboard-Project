/**
  * Author: Team HoneyDew
  * Computer Science 3307, Group Project
  * December 9, 2015
  * Header file for the publications class and its associated methods
*/
#ifndef PUBLICATIONS_H_INCLUDED
#define PUBLICATIONS_H_INCLUDED
#include <iostream>
#include <list>
#include <qcustomplot.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include "excelData.h"
#include "Parser.h"
using namespace std;

//Defines the methods and instance variables associated with the publications class
class publications
{
private:

//Instance variables
    excelData storedData;


public:
//Public Constructors

//First/last year is set to the earliest/latest year in the file
    publications(string file);

//First/last year is set using the given parameters
    publications(string file, int startYear, int endYear);

//Uninitialized constructor
    publications();

//Public methods

//Returns the information to be printed to the GUI, with each type's data separated by a single hyphen
    vector<string> guiTypeData();

//Shows a graph for the given person
    void showGraph(string personName, int graphType, QCustomPlot *graph);

//Get the total number of entries
    int getTotalEntries();

//Returns a pointer to the Parser object
    Parser *getParse();

//Returns the start year
    int getStartYear();

//Returns the end year
    int getEndYear();

//Updates the graph
    void updateGraph(int startYear, int endYear);

//Updates the years
    void updateYears(int startYear, int endYear);
};

#endif //PUBLICATIONS_H_INCLUDED

