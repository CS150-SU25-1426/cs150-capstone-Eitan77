#include <iostream>
#include <string>
#include <iomanip>
#include <fstream> 
#include <cmath>
#include <cctype> 
#include <ostream>
#include "SmoothieClass.h" 
using namespace std;

int main () {
    Smoothie s1(5, 10, "Banana, Strawberry, Yogurt");
    Smoothie s2(3, 7, "Mango, Pineapple, Coconut");

    cout << "Smoothie 1 order:" << endl;
    s1 << cout;
    cout << "\nSmoothie 2 order:" << endl;
    s2 << cout;

    cout << "\nAre the smmoothies equal? " << (s1 == s2 ? "Yes" : "No") << endl;
    s1.setCost(3);
    s1.setPrice(7);
    s1.setIngredients("Mango, Pineapple, Coconut");
    cout << "\nAfter modiifying Smoothie 1:" << endl;
    s1 << cout;
    cout << "\nAre the smoothies equal? " << (s1 == s2 ? "Yes" : "No") << endl;
    
    

    return 0;
}