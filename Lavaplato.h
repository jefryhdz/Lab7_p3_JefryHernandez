#include <iostream>
#include <string>
#include <vector>
#include "Personal.h"

using namespace std;

#ifndef LAVAPLATO_H
#define LAVAPLATO_H
class Lavaplato :public Personal{
	protected:
		double motivacion;
	public:
		Lavaplato(double);
		Lavaplato();
		double getMotivacion();
		void setMotivacion(double);

};
#endif