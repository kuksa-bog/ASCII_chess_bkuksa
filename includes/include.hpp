#ifndef INCLUDES_HPP
# define INCLUDES_HPP

#include <iostream>
#include <strstream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <map>
using namespace std;

struct Figure {
    string NameFigure;
    string CellColor;
    vector<vector<string>> path;
};

#endif
