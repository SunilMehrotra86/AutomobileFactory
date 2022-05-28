#include "TwoWheeler.h"
#include <iostream>



TwoWheeler::TwoWheeler()
{
}


TwoWheeler::~TwoWheeler()
{
}

void TwoWheeler::MyTypeIs()
{
    std::cout << "I am an " << typeid(this).name() << std::endl;
}
