#include <iostream>
#include <string>
#include <iomanip>
#include <fstream> 
#include <cmath>
#include <cctype> 
#include <ostream>
#include "Smoothie.h" 
#include "SmoothieList.h"
using namespace std;

int main() 
{

SmoothieList inventory;
	string ingredients; 
    int price; 
    int cost; 
	int choice = 0;

	do {
        cout << "\n\n";
		cout << "                          WELCOME TO THE                            **\n";
		cout << "                          Smoothie Spot                            **\n";
		cout << "************************************************************************\n";
		cout << "** Please make a choice from the following options:                   **\n";
		cout << "** 1)  Add a new Smoothie to Inventory                               **\n";
		cout << "** 2)  Remove a Smoothie from Inventory                              **\n";
		cout << "** 3)  Edit Smoothie in Inventory                                    **\n";
        cout << "** 4)  Display all Smoothies in Inventory                            **\n";
		cout << "** 5)  Exit                                                           **\n";
		cout << "************************************************************************\n";
		cout << ">> ";
		cin >> choice;
    
		cin.ignore();
        string hold;
        string newIngredients;
        Smoothie newSmoothie;
        string temp = ""; 
		switch (choice){
		case 1:
			cout << "Enter Ingredients: ";
			getline(cin, ingredients);
            //makes sure input is a number and not text

			cout << "Enter Price: ";
            cin >> temp;
            while (!isdigit(temp[0])) {
                cout << "Invalid input. Please enter a valid price: ";
                cin >> temp;
            }
            price = stoi(temp);
            
            cout << "Enter Cost: ";
            cin >> temp;
            while (!isdigit(temp[0])) {
                cout << "Invalid input. Please enter a valid cost: ";
                cin >> temp;
            }
            price = stoi(temp);
            while (!isdigit(temp[0])) {
                cout << "Invalid input. Please enter a valid cost: ";
                cin >> temp;
            }

			cin >> price;
            cout << "Enter Cost: ";
            cin >> cost;
			newSmoothie=Smoothie(cost, price, ingredients);
            inventory.addSmoothie(newSmoothie);
            cout << "smoothie added"; 
            break;
		case 2:
			cout << "Enter the index of the smothie to remove: ";
			int id;
            cin >> id;
            inventory.removeSmoothie(id);
            cout << "smoothie removed";
			break;
		case 3:
			cout << "Enter the index of the smoothie to edit: ";
            int editId;
            cin >> editId;
            cin.ignore();
            cout << "Enter new ingredients: ";
            getline(cin, newIngredients);
            cout << "Enter new price: ";
            int newPrice;
            cin >> newPrice;
            cout << "Enter new cost: ";
            int newCost;
            cin >> newCost;
            inventory.editSmoothie(editId, newCost, newPrice, newIngredients);
            cout << "Smoothie edited";
            break;
		case 4:
			cout << "This is all the smoothies in inventory: \n";
            cout << inventory;
			break;
        case 5: 
            cout << "Exiting the program" << endl;
            break;

	}}while (choice != 5);

	return EXIT_SUCCESS;
}