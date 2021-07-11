#pragma once
#include "C_Weapon.h"
class �_Offensive :
	public C_Weapon{
protected:
	double _blade_length;
public:
	�_Offensive() : C_Weapon(){
		this->_blade_length = 0.0;
	}
	�_Offensive(double _weight, double _size, double _blade_length)
		: C_Weapon(_weight, _size){
		this->_blade_length = _blade_length;
	}

	friend std::ostream& operator << (std::ostream& out, const �_Offensive& weapon) {
		out << ((C_Weapon)weapon) << " blade length: " << weapon._blade_length << " ";
		return out;
	}
	explicit operator C_Weapon() {
		return C_Weapon(this->_weight, this->_size);
	}
};
