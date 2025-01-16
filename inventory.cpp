
#include "inventory.h"
#include "exception.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;


void storeInventory::showMenu(vector<storeInventory>& inventoryList) {

	cout << "\t\t\t" << " Krusty Games Associate #1452 " << endl;
	cout << "\t\t\t" << "============================" << endl;
	
	bool running = true;
	int input = 0;	
	while (running)
	{
		cout << "\t\t\t" << " Please select menu option " << endl;
		cout << "\t\t\t" << " 0 - To exit" << endl;
		cout << "\t\t\t" << " 1 - Store games" << endl;
		cout << "\t\t\t" <<" 2 - Display Inventory" << endl;
		cout << "\t\t\t" << " 3 - Remove " << endl;
		cout << "\t\t\t"; cin >> input;
	
		cin.ignore();// so input does not end up in the array
		switch (input) {
		case 0://ends program
			running = false;
			break;
		case 1://retrieves games from user to be stored
			getGames(inventoryList);
			
			break;
		case 2://shows just inv
			displayInventory(inventoryList);
			break;//assign price
		case 3:
			break;
		//	store.setPrice(videoGame);
		}
	}

}


void storeInventory::getGames(vector<storeInventory>& inventoryList) {
	int numGames;
	storeInventory newGame(name, genre, price, quantity);
	
	cout << "\t\t\t" << " enter the number of games being sold" << endl;
	cout << "\t\t\t"; cin >> numGames;
	cin.ignore();// so input does not end up in the array
	cout << "\t\t\t" << " enter Games " << endl;
	for (int i = 0; i < numGames; i++) {
		cout << "\t\t\t"  << " Game " << (i + 1) << ": ";
		
		getline(cin, newGame.name);
		cout << "\t\t\t" << "enter genre" << endl;
		cout << "\t\t\t";
		getline(cin, newGame.genre);
		cout << "\t\t\t" << "enter price" << endl;
		cout << "\t\t\t";
		cin >> newGame.price;
		cout << "\t\t\t" << "enter Quantity" << endl;
		cout << "\t\t\t";
		cin >> newGame.quantity; // Get the quantity
		cin.ignore(); // to clear the newline left in the input buffer


		
		
	//	inventoryList.push_back(name);// adds game to vector
		inventoryList.push_back(newGame);
	}
	
	displayInventory(inventoryList);
}
void storeInventory::displayInventory(vector<storeInventory>& inventoryList){
	cout << endl;
	cout << " Games Now in inventory " << endl;
	for (int j = 0; j < inventoryList.size(); j++) {
		// access the storeInventory object that is private
		storeInventory& item = inventoryList[j];
		cout << (j + 1) << ": "
			<< "Name: " << setw(15) << left <<  item.name
			<< " Genre: " << setw(15) << left << item.genre
			<< " Price: $" << setw(15) << left << item.price
			<< " Quantity: " << setw(15) << left << item.quantity
			<< endl;
	}
	cout << endl;
}

void storeInventory::setPrice(double newPrice) {
	price = newPrice;
	cout << " Updated price to $" << price << endl;
}
void storeInventory::setQuantity(int newQuantity) {
	quantity = newQuantity;
	cout << " Updated quantity" << quantity << endl;
}
