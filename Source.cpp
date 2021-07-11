#include "C_Type.h"
#include "C_Infantry.h"
#include "C_Cavalry.h"
#include "C_Fleet.h"

//#include "C_Weapon.h"
#include "Ñ_Offensive.h"
#include "C_Protective.h"
#include "C_Throwing_machines.h"


#include <iostream>
int main()
{
	//C_Weapon weapon(1, 1);
	//std::cout << weapon << "\n";

	Ñ_Offensive offensive(2.78, 3, 4);
	std::cout << offensive << "\n";

	C_Protective protective(9, 7.7);
	std::cout << protective << "\n";

	C_Throwing_machines throwing(10, 6.1, 32.7);
	std::cout << throwing << "\n";
	system("pause");
}