#pragma once
#include "Automobile.h"
class TwoWheeler :
    public Automobile
{
public:
    TwoWheeler();
    ~TwoWheeler();

    // Inherited via Automobile
    virtual void MyTypeIs() override;
};

