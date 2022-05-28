#include "PetrolCar.h"
#include <iostream>


PetrolCar::PetrolCar()
{
}


PetrolCar::~PetrolCar()
{
}

void PetrolCar::MyTypeIs()
{
    std::cout << "I am an " << typeid(this).name() << std::endl;
} 
