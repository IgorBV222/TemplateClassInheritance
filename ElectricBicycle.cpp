#include "ElectricBicycle.h"

ElectricBicycle::ElectricBicycle(std::string brand, int power) :_brand(brand), _power(power) {}

void ElectricBicycle::printBicycleInfo() {
	std::cout << "Bicycle brand: " << _brand << "\nPower, W: " << _power << '\n';
}
