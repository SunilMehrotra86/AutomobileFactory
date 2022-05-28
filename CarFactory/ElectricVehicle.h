#pragma once
#include "Automobile.h"
class ElectricVehicle :
    public Automobile
{
public:
    ElectricVehicle();
    ~ElectricVehicle();

    // Inherited via Automobile
    virtual void MyTypeIs() override;
};

