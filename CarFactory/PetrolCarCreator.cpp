#include "PetrolCarCreator.h"
#include "PetrolCar.h"



PetrolCarCreator::PetrolCarCreator()
{
}


PetrolCarCreator::~PetrolCarCreator()
{
}

Automobile * PetrolCarCreator::Create()
{
    return new PetrolCar;;
}
