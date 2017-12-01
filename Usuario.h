#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef USUARIO_H
#define USUARIO_H
class Usuario{
	protected:
		string username;
		string password;
		string nombre;
		int edad;
		int ID;
		int telefono;
	public:
		Usuario(string,string,string,int,int,int);
		Usuario();
		string getUsername();
		void setUsername(string);

		string getPassword();
		void setPassword(string);

		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad(int);

		int getID();
		void setID(int);

		int getTelefono();
		void setTelefono(int);

};
#endif