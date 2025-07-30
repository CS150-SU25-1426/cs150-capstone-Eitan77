#ifndef SMOOTHIE_H
#define SMOOTHIE_H
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream> 
#include <cmath>
#include <cctype> 
using namespace std;
class Smoothie{
    public: 
     int cost; 
     int mId;
     int price; 
     string ingredients;
    public: 
    Smoothie(int cost, int price, string ingredients);
    Smoothie();
    int getCost();
    int getId();
    int getPrice();
    string getIngredients();
    void setCost(int cost);
    void setPrice(int price);
    void setIngredients(string ingredients);
    friend ostream& operator<<(ostream& os, const Smoothie& smoothie);
    bool operator==(const Smoothie& other)const;
}; 
#endif