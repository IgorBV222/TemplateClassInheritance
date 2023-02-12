#include "Vehicle.h"

void Vehicle<ElectroFuel>::printFuelInfo() {
	std::cout << "Fuel: " << _fuel.info() << '\n';
}

ElectroFuel::ElectroFuel() :_fuel("Electric fuel") {}
const std::string& ElectroFuel::info() const {
	return _fuel;
}