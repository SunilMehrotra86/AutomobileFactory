#include "ElectricVehicle.h"
#include<iostream>



ElectricVehicle::ElectricVehicle()
{
}


ElectricVehicle::~ElectricVehicle()
{
}

void ElectricVehicle::MyTypeIs()
{
    std::cout << "I am an " << typeid(this).name() << std::endl;
}
