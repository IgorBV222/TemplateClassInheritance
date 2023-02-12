#pragma once
#include "Vehicle.h"

class ElectricBicycle :public Vehicle<ElectroFuel> {
public:
	ElectricBicycle(std::string brand, int power);
	void printBicycleInfo();
private:
	std::string _brand;
	int _power;
};
