/**
  * Author: Team HoneyDew
  * Computer Science 3307, Group Project
  * December 9, 2015
  * Source file for the funding class and its associated methods
*/
#include <iostream>
#include <iterator>
#include <list>
#include <qcustomplot.h>
#include <sstream>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include "excelData.h"
#include "Parser.h"
#include "funding.h"
using namespace std;

//Funding constructor (first/last year is set to the earliest/latest year in the file)
funding::funding(string file)
{
    excelData newData(file, 1);
    storedData = newData;
}

//Funding constructor (first/last year is set using the given parameters)
funding::funding(string file, int firstYear, int lastYear)
{
    excelData newData(file, firstYear, lastYear, 1);
    storedData = newData;
}

//Uninitialized funding constructor
funding::funding() {}


//Returns the information to be printed to the GUI, with each type's dataset separated by a single hyphen
vector<string> funding::guiTypeData()
{
    return storedData.guiTypeData();
}

//Shows a graph for the given person
void funding::showGraph(string personName, int graphType, QCustomPlot *graph)
{
    storedData.showGraph(personName, graphType, graph);
}

//Get the total number of entries
int funding::getTotalEntries()
{
    return storedData.getTotalEntries();
}

//Returns a pointer to the Parser object
Parser *funding::getParse()
{
    return storedData.getParse();
}

//Returns the start year
int funding::getStartYear()
{
    return storedData.getStartYear();
}

//Returns the end year
int funding::getEndYear()
{
    return storedData.getEndYear();
}

//Updates the graph with a new start year and end year
void funding::updateGraph(int startYear, int endYear)
{
    storedData.updateGraph(startYear, endYear);
}

//Updates the years
void funding::updateYears(int startYear, int endYear)
{
    storedData.updateYears(startYear, endYear);
}
