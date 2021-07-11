#pragma once
#include <ostream>

class C_Weapon{
protected:
	double _weight;
	double _size;
public:
	C_Weapon() {
		this->_weight = this->_size = 0.0;
	}
	C_Weapon(double _weight, double _size) {
		this->_weight = _weight;
		this->_size = _size;
	}
	friend std::ostream& operator << (std::ostream& out, const C_Weapon& weapon) {
		out << "Weight: " << weapon._weight << ", size: " << weapon._size << " ";
		return out;
	}
};
