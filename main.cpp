#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include "Usuario.h"
#include "Cliente.h"
#include "Personal.h"
#include "Administrador.h"
#include "Chef.h"
#include "Lavaplato.h"
#include "Mesero.h"

using namespace std;

int menu();
vector<Usuario*>menuadmin(Administrador*);
vector<Usuario*>menumesero(Mesero*);
vector<Usuario*>menulavaplato(Lavaplato*);
vector<Usuario*>menucliente(Cliente*);
vector<Usuario*>menuchef(Chef*);

int main(){
	char ans='s';
	vector <Usuario*> lista;
	string user,password;
	Usuario* User;	
	Administrador* admin;
	Lavaplato* lavaplato;
	Mesero* mesero;
	Chef* chef;
	Cliente* cliente;
    {
    	int resp= menu();
    	if (resp==1)
    	{
    		
    	}else{
    		cout<<"Ingrese el username"<<endl;
    		cin>>user;
    		cout<<"Ingrese la contraseña"<<endl;
    		cin>>password;
    		for (int i = 0; i < lista.size(); ++i)
    		{
    			Usuario* usuario= lista.at(i);
    			if ((usuario->getUsername()==user)&&(usuario->getPassword()==password))
    			{
    				User= usuario;	
    			}
    		}
    		if (typeid(*User)==typeid(Administrador))
    		{
    			admin = dynamic_cast<Administrador*>(User);
    		}
    		if (typeid(*User)==typeid(Lavaplato))
    		{
    			lavaplato= dynamic_cast<Lavaplato*>(User);
    		}
    		if (typeid(*User)==typeid(Mesero))
    		{
    			mesero = dynamic_cast<Mesero*>(User);
    		}
    		if (typeid(*User)==typeid(Chef))
    		{
    			chef = dynamic_cast<Chef*>(User);
    			
    		}
    		if (typeid(*User)==typeid(Cliente))
    		{
    			cliente= dynamic_cast<Cliente*>(User);
    		}

    	}
    	cout<<"Desea continuar en el programa[s/n]"<<endl;
    } while (ans!='N'||ans!='n');
}

int menu(){
	int resp;
	do
	{
		cout<<"1. Login"<<endl;
		cout<<"2. Crear Usuario de Cliente"<<endl;
		cin>>resp;
	} while (resp<1||resp>2);
	
	
}