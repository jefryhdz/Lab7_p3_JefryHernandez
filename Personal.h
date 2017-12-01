#include <iostream>
#include <string>
#include <vector>
#include "Usuario.h"

using namespace std;

#ifndef PERSONAL_H
#define PERSONAL_H
class Personal :public Usuario{
	protected:
		string contratacion;
		double Sueldo;
	public:
		Personal(string,double);
		Personal();
		string getContratacion();
		void setContratacion(string);

		double getSueldo();
		void setSueldo(double);

};
#endif