#pragma once
#include "C_Type.h"
class C_Infantry :
    public C_Type {
public:
    C_Infantry(int _count) :
        C_Type(_count) {
    }
};