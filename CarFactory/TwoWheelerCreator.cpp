#include "TwoWheelerCreator.h"
#include "TwoWheeler.h"



TwoWheelerCreator::TwoWheelerCreator()
{
}


TwoWheelerCreator::~TwoWheelerCreator()
{
}

Automobile * TwoWheelerCreator::Create()
{
    return new TwoWheeler;
}
