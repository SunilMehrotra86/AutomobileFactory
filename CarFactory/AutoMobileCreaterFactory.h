#pragma once

class Automobile;

class AutoMobileCreaterFactory
{
public:
    Automobile* m_PtrAutomobile;
    AutoMobileCreaterFactory()
    {
    }

    virtual void IamAN();

    virtual Automobile* Create() = 0;


    virtual ~AutoMobileCreaterFactory()
    {
    }
};

