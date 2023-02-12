#pragma once
#include <iostream>

class ElectroFuel {
public:
	ElectroFuel();
	const std::string& info() const;
private:
	std::string _fuel;
};

template <typename T>
class Vehicle {
public:
	void printFuelInfo();
private:
	ElectroFuel _fuel;
};

