#pragma once
#include "C_Type.h"
class �_Fleet :
	public C_Type {
protected:
	int _count_of_ships;
public:
	�_Fleet() : C_Type() {
		this->_count_of_ships = 0;
	}
	�_Fleet(int _count, int _count_of_ships)
		: C_Type(_count) {
		this->_count_of_ships = _count_of_ships;
	}

	friend std::ostream& operator << (std::ostream& out, const �_Fleet& type) {
		out << ((C_Type)type) << " count of ships: " << type._count_of_ships << " ";
		return out;
	}
	explicit operator C_Type() {
		return C_Type(this->_count);
	}
};