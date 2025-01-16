

#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <vector>
using namespace std;



class storeInventory
{
private:
	string name;
	string genre;
	double price;
	int quantity;
	
public:
	 // Constructor to initialize an inventory item
    storeInventory(string n = "", string g = "", double cost = 0.0, int amount = 0)
        : name(n), genre(g), price(cost), quantity(amount) {}
	
	void showMenu(vector<storeInventory>& inventoryList);
	void getGames(vector<storeInventory>& inventoryList);
	void displayInventory(vector<storeInventory>& inventoryList);
	void setPrice(double price);
	void setQuantity(int quantity);
	//void updatePrice(vector<storeInventory>& inventoryList);
	


};


#endif 
