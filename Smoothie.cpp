#include "Smoothie.h"
#include "SmoothieList.h"
#include <iostream>
#include <vector>
using namespace std;
#include <iomanip>
#include <string>

Smoothie::Smoothie(int cost, int price, string ingredients){
    this->cost = cost;
    this->price = price;
    this->ingredients = ingredients;
    static int idCounter = 0;
    mId = ++idCounter;
}
Smoothie::Smoothie() : cost(0), price(0), ingredients("") {}
int Smoothie::getCost() {
    return cost;}
int Smoothie::getPrice() {
    return price;}
int Smoothie::getId() {
    return mId;}
string Smoothie::getIngredients() {
    return ingredients;}
void Smoothie::setCost(int cost) {
    this->cost = cost;}
void Smoothie::setPrice(int price) {
    this->price = price;}
void Smoothie::setIngredients(string ingredients) {
    this->ingredients = ingredients;}
ostream& operator<<(ostream& os, const Smoothie& smoothie) {
    os << "Smoothie ID: " << smoothie.mId << "\n"
       << "Ingredients: " << smoothie.ingredients << "\n"
       << "Price: $" << fixed << setprecision(2) << smoothie.price << "\n"
       << "Cost: $" << fixed << setprecision(2) << smoothie.cost << "\n";
    return os;}
bool Smoothie::operator==(const Smoothie& other) const {
    return (cost == other.cost && price == other.price && ingredients == other.ingredients);
}
