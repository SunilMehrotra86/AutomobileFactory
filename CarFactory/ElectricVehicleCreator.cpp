#include "ElectricVehicleCreator.h"
#include "ElectricVehicle.h"



ElectricVehicleCreator::ElectricVehicleCreator()
{
}


ElectricVehicleCreator::~ElectricVehicleCreator()
{
}

Automobile * ElectricVehicleCreator::Create()
{
    return new ElectricVehicle;
}
