#include "AutoMobileCreaterFactory.h"
#include "Automobile.h"


void AutoMobileCreaterFactory::IamAN()
{
    m_PtrAutomobile = Create();
    m_PtrAutomobile->MyTypeIs();
}
