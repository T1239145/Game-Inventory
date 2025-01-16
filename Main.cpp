#include <iostream>
#include <string>
#include <vector>
#include "inventory.h"
#include "exception.h"

using namespace std;


int main() {
	//create menu and add for input
	//game store
	
	
	storeInventory store;
	//currently only captures name change string to inventory and also inv cpp
	vector<storeInventory> inventoryList;

	store.showMenu(inventoryList);

	return 0;
}