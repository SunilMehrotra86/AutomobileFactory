#pragma once
#include "Automobile.h"
class PetrolCar :
    public Automobile
{
public:
    PetrolCar();
    ~PetrolCar();

    // Inherited via Automobile
    virtual void MyTypeIs() override;
};

