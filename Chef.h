#include <iostream>
#include <string>
#include <vector>
#include "Personal.h"

using namespace std;

#ifndef CHEF_H
#define CHEF_H
class Chef : public Personal{
	protected:
		string Platofavorito;
	public:
		Chef(string);
		Chef();
		string getPlatofavorito();
		void setPlatofavorito(string);

};
#endif