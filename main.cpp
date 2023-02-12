#include <iostream>
#include "ElectricBicycle.h"

int main() {
	
	ElectricBicycle bicycle("HIPER", 350);
	bicycle.printBicycleInfo();

	std::cout << "=======================\n";
	bicycle.printFuelInfo();

	return 0;
}