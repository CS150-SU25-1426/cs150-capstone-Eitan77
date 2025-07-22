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
     int price; 
     string ingredients;
    public: 
    Smoothie(int cost, int price, string ingredients) : cost(cost), price(price), ingredients(ingredients) {}
    Smoothie() : cost(0), price(0), ingredients("") {}
    int getCost() const { return cost; }
    int getPrice() const { return price; }
    string getIngredients() const { return ingredients; }
    void setCost(int cost) { this->cost = cost; }
    void setPrice(int price) { this->price = price; }
    void setIngredients(string ingredients) { this->ingredients = ingredients; }
    void operator<<(ostream& os) const {
        os << "Smoothie Ingredients: " << ingredients << "\n";
        os << "Cost: $" << cost << "\n";
        os << "Price: $" << price << "\n";
    }
    bool operator==(const Smoothie& other) const {
        return ingredients == other.ingredients && cost == other.cost && price == other.price;
    }
}; 