#pragma once
#include "C_Weapon.h"
class C_Protective :
    public C_Weapon{
public:
    C_Protective(double _weight, double _size) :
        C_Weapon(_weight, _size) {
    }
};