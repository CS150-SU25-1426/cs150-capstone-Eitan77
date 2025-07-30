#include "Smoothie.h"
#include "SmoothieList.h"
#include <iostream>
#include <vector>
using namespace std;
#include <iomanip>
#include <string>

bool SmoothieList::addSmoothie(const Smoothie &smoothie) {
    mList.push_back(smoothie);
    return true;
}
bool SmoothieList::removeSmoothie(const int id) {
    for(int i = 0; i < mList.size(); ++i) {
        if(mList[i].getId() == id) {
            mList.erase(mList.begin() + i);
            return true;
        }
    }
    return false;
}
bool SmoothieList::operator==(const SmoothieList& other) const {
    return mList == other.mList;
}
ostream& operator<<(ostream& os, const SmoothieList& s) {
    os << "Smoothie List:\n";
    for (const auto& smoothie : s.mList) {
        os << smoothie << "\n";
    }
    return os;
}
bool SmoothieList::editSmoothie(const int id, const int newCost, const int newPrice, const string& newIngredients) {
    for (int i = 0; i < mList.size(); ++i) {
        if (mList[i].getId() == id) {
            mList[i].setCost(newCost);
            mList[i].setPrice(newPrice);
            mList[i].setIngredients(newIngredients);
            return true;}
    }
    return false;
}