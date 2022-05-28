#pragma once
#include "AutoMobileCreaterFactory.h"
class ElectricVehicleCreator :
    public AutoMobileCreaterFactory
{
public:
    ElectricVehicleCreator();
    ~ElectricVehicleCreator();

    // Inherited via AutoMobileCreaterFactory
    virtual Automobile * Create() override;
};

