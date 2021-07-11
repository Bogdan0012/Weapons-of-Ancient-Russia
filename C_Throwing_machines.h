#pragma once
#include "C_Weapon.h"
class C_Throwing_machines :
	public C_Weapon {
protected:
	double _range;
public:
	C_Throwing_machines() : C_Weapon() {
		this->_range = 0.0;
	}
	C_Throwing_machines(double _weight, double _size, double _range)
		: C_Weapon(_weight, _size) {
		this->_range = _range;
	}

	friend std::ostream& operator << (std::ostream& out, const C_Throwing_machines& weapon) {
		out << ((C_Weapon)weapon) << " range: " << weapon._range << " ";
		return out;
	}
	explicit operator C_Weapon() {
		return C_Weapon(this->_weight, this->_size);
	}
};
