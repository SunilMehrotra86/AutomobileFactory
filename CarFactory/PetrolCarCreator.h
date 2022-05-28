#pragma once
#include "AutoMobileCreaterFactory.h"
class PetrolCarCreator :
    public AutoMobileCreaterFactory
{
public:
    PetrolCarCreator();
    ~PetrolCarCreator();

    // Inherited via AutoMobileCreaterFactory
    virtual Automobile * Create() override;
};

