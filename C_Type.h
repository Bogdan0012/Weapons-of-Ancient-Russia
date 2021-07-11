#pragma once
#include <ostream>

class C_Type {
protected:
	int _count;
public:
	C_Type() {
		this->_count = 0;
	}
	C_Type(int _count) {
		this->_count = _count;
	}
	friend std::ostream& operator << (std::ostream& out, const C_Type& type) {
		out << "Count of warriors: " << type._count << " ";
		return out;
	}
};