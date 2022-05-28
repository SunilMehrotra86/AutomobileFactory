#include<iostream>
#include"ElectricVehicleCreator.h"
#include "PetrolCarCreator.h"
#include "TwoWheelerCreator.h"
using namespace std;

int main()
{
    cout << "Enter the type of automobile needed" << std::endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1: //car
    {
        PetrolCarCreator am;
        am.IamAN();
    }
    break;
    case 2://two wheeler
    {
        TwoWheelerCreator am;
        am.IamAN();
    }
    break;
    case 3://electric
    {
        ElectricVehicleCreator am;
        am.IamAN();
    }
    break;
    default:
    {
        std::cout << "This is a wrong choice." << std::endl;
        break;
    }

    }

    system("Pause");
    return 0;
}