#pragma once
#include "C_Type.h"
class Ñ_Cavalry :
	public C_Type {
protected:
	int _count_of_horses;
public:
	Ñ_Cavalry() : C_Type() {
		this->_count_of_horses = 0;
	}
	Ñ_Cavalry(int _count, int _count_of_horses)
		: C_Type(_count) {
		this->_count_of_horses = _count_of_horses;
	}

	friend std::ostream& operator << (std::ostream& out, const Ñ_Cavalry& type) {
		out << ((C_Type)type) << " count of horses: " << type._count_of_horses << " ";
		return out;
	}
	explicit operator C_Type() {
		return C_Type(this->_count);
	}
};