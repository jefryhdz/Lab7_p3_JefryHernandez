#include <iostream>
#include <string>
#include <vector>
#include "Personal.h"

using namespace std;

#ifndef MESERO_H
#define MESERO_H
class Mesero : public Personal{
	protected:
		int platillos;
	public:
		Mesero(int);
		Mesero();
		int getPlatillos();
		void setPlatillos(int);

};
#endif