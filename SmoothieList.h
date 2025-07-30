#ifndef SMOOTHIELIST_H
#define SMOOTHIELIST_H
#include <iostream>
#include <vector>
#include "Smoothie.h"
using namespace std;

class SmoothieList {
private:
    vector<Smoothie> mList;
public: 
    bool addSmoothie(const Smoothie &smoothie); 
    bool removeSmoothie(const int id);
    bool editSmoothie(const int id, const int newCost, const int newPrice, const string& newIngredients);
    bool operator==(const SmoothieList& other) const;
    friend ostream& operator<<(ostream& os, const SmoothieList& s);
}; 
#endif