//  xkitchen.cpp
//  Defining the xkitchen library

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class tokenDef {
  public:
    string name;
    string valid[20];
};

class dataFormat {
  public:
    string name;
    string type;
    tokenDef valid[20];
};

class xkitchen {
  public:
    //  Constructor
    xkitchen(string name, string description/* dataFormat* formats*/) {
      this->name = name;
      this->description = description;
      //this->formats = formats;
    }

    // Overload the insertion operator
    friend ostream& operator<<(ostream& os, const xkitchen& this_xk) {
        os << "Name: " << this_xk.name << "\n Description: " << this_xk.description;
        return os;
    }


    string name;
    string description;
    string sample;
    dataFormat formats[20];
};