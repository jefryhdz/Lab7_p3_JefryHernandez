#include <iostream>
#include <string>
#include <vector>
#include "Personal.h"
#include "Personal.h"

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
class Administrador :public Personal{
	protected:
		vector<Personal*> Lista;
	public:
		Administrador(vector<Personal*>);
		Administrador();
		vector<Personal*> getLista();
		void setLista(Personal*);

};
#endif