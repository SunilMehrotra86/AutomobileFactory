#pragma once
#include "AutoMobileCreaterFactory.h"
class TwoWheelerCreator :
    public AutoMobileCreaterFactory
{
public:
    TwoWheelerCreator();
    ~TwoWheelerCreator();

    // Inherited via AutoMobileCreaterFactory
    virtual Automobile * Create() override;
};

